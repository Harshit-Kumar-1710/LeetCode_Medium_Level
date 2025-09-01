class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int rem,vector<int>&nums)
    {
        if(i==nums.size())
        {
            if(rem==0) return 0;
            else return -1e9;
        }
        if(Dp[i][rem]!=-1) return Dp[i][rem];
        int Take=nums[i]+Func(i+1,(rem+nums[i])%3,nums);
        int NotTake=Func(i+1,rem,nums);
        return Dp[i][rem]=max(Take,NotTake);
    }
    int maxSumDivThree(vector<int>& nums) 
    {
        int n=nums.size();
        int rem=0;
        int i=0;
        Dp.resize(n,vector<int>(3,-1));
        return Func(0,0,nums);
        
    }
};