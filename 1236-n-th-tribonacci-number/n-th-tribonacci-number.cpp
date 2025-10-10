class Solution {
public:
    vector<int>Dp;
    int Func(int n)
    {
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
        if(Dp[n]!=-1) return Dp[n];
        return Dp[n]=Func(n-1)+Func(n-2)+Func(n-3);
    }
    int tribonacci(int n) 
    {
        Dp.resize(n+1,-1);
        return Func(n);
    }
};