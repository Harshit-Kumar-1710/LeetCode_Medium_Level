class Solution {
public:
    vector<int>Dp;
    bool Func(int ind,int n,vector<int>&nums)
    {
        if(ind==n-1)
        {
            return Dp[ind]=true;
        }
        if(Dp[ind]!=-1) return Dp[ind];
        for(int j=1;j<=nums[ind];j++)
        {
            if(Func(ind+j,n,nums))
            {
                return Dp[ind]=true;
            }
        }
    return Dp[ind]=false;
    }
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        Dp.resize(n,-1);
        return Func(0,n,nums);
        
    }
};