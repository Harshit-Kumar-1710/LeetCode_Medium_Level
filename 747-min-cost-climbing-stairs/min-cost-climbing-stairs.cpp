class Solution {
public:
    vector<int>Dp;
    int Func(int i,vector<int>&cost,int n)
    {
        if(i>=n) return 0;
        if(Dp[i]!=-1) return Dp[i];
        int FirstStep=cost[i]+Func(i+1,cost,n);
        int SecondStep=cost[i]+Func(i+2,cost,n);
        return Dp[i]=min(FirstStep,SecondStep);
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        Dp.resize(n,-1);
        int a=Func(0,cost,n);
        Dp.resize(n,-1);
        int b=Func(1,cost,n);
        return min(a,b);
    }
};