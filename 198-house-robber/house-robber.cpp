class Solution {
public:
    vector<int>Dp;
    int Func(int i,vector<int>&nums,int n)
    {
        if(i>=n) return 0;
        if(Dp[i]!=-1) return Dp[i];
        int Take=nums[i]+Func(i+2,nums,n);
        int NotTake=Func(i+1,nums,n);
        return Dp[i]=max(Take,NotTake);
    }
    int rob(vector<int>& nums) 
    {
        Dp.resize(nums.size(),-1);
        int n=nums.size();
        return Func(0,nums,n);
    }
};