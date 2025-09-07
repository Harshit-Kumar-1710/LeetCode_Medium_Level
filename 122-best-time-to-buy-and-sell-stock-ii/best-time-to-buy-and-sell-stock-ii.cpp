class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,vector<int>&prices,int Buy,int n)
    {
        if(i==n) return 0;
        if(Dp[i][Buy]!=-1) return Dp[i][Buy];
        int Profit=0;
        if(Buy)
        {
            Profit=max(-prices[i]+Func(i+1,prices,0,n),0+Func(i+1,prices,1,n));
        }
        else
        {
            Profit=max(prices[i]+Func(i+1,prices,1,n),0+Func(i+1,prices,0,n));
        }
    return Dp[i][Buy]=Profit;
    }
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        Dp.resize(n,vector<int>(2,-1));
        return Func(0,prices,1,n);
        
    }
};