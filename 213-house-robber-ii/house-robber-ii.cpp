class Solution {
public:
    vector<int>Dp;
    int Func(int i,int n,vector<int>&nums)
    {
        if(i>=n) return 0;
        if(Dp[i]!=-1) return Dp[i];
        int Take=nums[i]+Func(i+2,n,nums);
        int NotTake=Func(i+1,n,nums);
        return Dp[i]=max(Take,NotTake);
    }
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return nums[0];
        Dp.assign(n,-1);
        int a=Func(0,n-1,nums);
        Dp.assign(n,-1);
        int b=Func(1,n,nums);
        return max(a,b);
    }
};