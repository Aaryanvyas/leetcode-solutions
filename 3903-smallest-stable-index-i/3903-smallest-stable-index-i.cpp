class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> rightmin(n);
        rightmin[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--){
            rightmin[i] = min(nums[i], rightmin[i + 1]);
        }

        int leftmax = nums[0];

        for(int i = 0; i < n; i++){
            leftmax = max(nums[i], leftmax);

            int stablescore = leftmax - rightmin[i];

            if(stablescore <= k){
                return i;
            }
        }

        return -1;
    }
};