class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1);
        if(n==0)
        {
            return{};
        }
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        dp[0]=nums[0];
        dp[1]=max(nums[1],dp[0]);
        for(int i=2;i<nums.size();i++)
        {
            dp[i]= max(dp[i-1], nums[i]+dp[i-2]);

        }
        return dp[n-1];
    }
};
