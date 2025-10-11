class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,int n,int m,string &s,string &t)
    {
        if(i>n && j>m) return 1;
        if(i>n && j<=m || i<=n && j>m) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(s[i]==t[j])
        {
            int Method1=Func(i+1,j+1,n,m,s,t);
            int Method2=Func(i+1,j,n,m,s,t);
            return Dp[i][j]=Method1+Method2;
        }
        return Dp[i][j]=Func(i+1,j,n,m,s,t);
    }
    int numDistinct(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        Dp.resize(n+1,vector<int>(m+1,-1));
        return Func(0,0,n,m,s,t);
        
    }
};