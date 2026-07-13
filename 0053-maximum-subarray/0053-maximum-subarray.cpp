class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int best_ending = nums[0];
        int ans = nums[0];

        for(int i = 1;i<n ; i++){
            
            int a = best_ending + nums[i];
            int b  = nums[i];

            best_ending = max(a,b);
            ans = max(best_ending,ans );

        }
        return ans ;
    }
};