class Solution {
public:

    int goal(vector<int>& nums , int k){
        int left = 0 , right = 0 , sum  = 0 , cnt = 0;
        if(k<0)return 0;
        while(right < nums.size()){
            sum += nums[right] % 2;
            
            while( sum > k){
                
                sum -= nums[left] % 2;
                left++;
            }
             
            {
                cnt = cnt + (right - left + 1);
                right++;
            }
           
            
        }
         return cnt;
    };
    
    int numberOfSubarrays(vector<int>& nums, int k) {

        return goal(nums , k) - goal(nums , k-1);
        
    }
};