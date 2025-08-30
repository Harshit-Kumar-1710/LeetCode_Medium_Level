class Solution {
public:
    vector<int>Dp;
    bool PerfectSquare(int num)
    {
        int k=sqrt(num);
        if(k*k==num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int Func(int n)
    {
        int MinLen=INT_MAX;
        if(n==0) return 0;
        if(n<0) return -1;
        if(Dp[n]!=-1) return Dp[n];
        for(int j=1;j*j<=n;j++)
        {
            if(PerfectSquare(j*j))
            {
                if(Func(n-j*j)>=0)
                {
                    int c=1+Func(n-j*j);
                    MinLen=min(MinLen,c);
                }
            }
        }
    return Dp[n]=MinLen;
    }
    int numSquares(int n) 
    {
        Dp.resize(n+1,-1);
        return Func(n);      
    }
};