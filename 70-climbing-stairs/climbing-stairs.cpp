class Solution {
public:
    vector<int>Dp;
    int Func(int n)
    {
        Dp[0]=1,Dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            Dp[i]=Dp[i-1]+Dp[i-2];
        }
        return Dp[n];
    }
    int climbStairs(int n) 
    {
        Dp.resize(n+1,-1);
        return Func(n);
        
    }
};