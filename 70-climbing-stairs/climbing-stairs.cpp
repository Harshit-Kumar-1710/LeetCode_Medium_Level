class Solution {
public:
    vector<int>Dp;
    int Func(int n)
    {
        if(n<=2) return n;
        int a,b;
        if(Dp[n-1]!=-1) a=Dp[n-1];
        else a=Func(n-1);
        if(Dp[n-2]!=-1) b=Dp[n-2];
        else b=Func(n-2);
        Dp[n]=a+b;
        return Dp[n];
    }
    int climbStairs(int n) 
    {
        Dp.resize(n+1,-1);
        return Func(n);
    }
};