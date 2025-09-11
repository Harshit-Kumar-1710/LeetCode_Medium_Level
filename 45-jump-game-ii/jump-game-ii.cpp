class Solution {
public:
    vector<int>Dp;
    int Func(int index,int n,vector<int>&nums)
    {
        if(index==n-1) return 0;
        if(Dp[index]!=-1) return Dp[index];
        int Minimum=1e5;
        for(int j=1;j<=nums[index];j++)
        {
            if((j+index)<(n-1) && nums[j+index]!=0)
            {
                Minimum=min(Minimum,1+Func(j+index,n,nums));
            }
            else if((j+index)==n-1)
            {
                Minimum=min(Minimum,1+Func(j+index,n,nums));
            }
        }
    return Dp[index]=Minimum;
    }
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        Dp.resize(n,-1);
        return Func(0,n,nums);
        
    }
};