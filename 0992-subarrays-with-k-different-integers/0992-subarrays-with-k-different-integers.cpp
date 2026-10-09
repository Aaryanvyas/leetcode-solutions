class Solution {
public:

    int atmost(vector<int>& nums , int k){
        
        int left = 0 , right = 0, count = 0;
        unordered_map<int,int>mpp;

        if( k < 0)return 0;

        while(right < nums.size()){

            mpp[nums[right]]++;

            while(mpp.size() > k){
                mpp[nums[left]]--;

                if(mpp[nums[left]] == 0){
                    mpp.erase(nums[left]);
                }
                left++;
            }
            count = count + right - left + 1;
            right++;


        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return atmost(nums,k) -  atmost(nums, k-1);
        
    }
};