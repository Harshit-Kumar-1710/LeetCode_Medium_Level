class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int ind,vector<int>days,int n,vector<int>costs,int Reachability)
    {
        if(ind>=n) return 0;
        if(Dp[ind][Reachability]!=-1) return Dp[ind][Reachability];
        int Choice1=1e5,Choice2=1e5,Choice3=1e5;
        if(Reachability<days[ind])
        {
            Choice1=costs[0]+Func(ind+1,days,n,costs,days[ind]);
            Choice2=costs[1]+Func(ind+1,days,n,costs,days[ind]+6);
            Choice3=costs[2]+Func(ind+1,days,n,costs,days[ind]+29);
        }
        else
        {
            return Func(ind+1,days,n,costs,Reachability);
        }
    return Dp[ind][Reachability]=min({Choice1,Choice2,Choice3});
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        int n=days.size();
        int Reachability=0;
        Dp.resize(n,vector<int>(400,-1));
        return Func(0,days,n,costs,0);
    }
};