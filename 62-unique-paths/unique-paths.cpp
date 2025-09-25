class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,int m,int n)
    {
        if(i>=m || j>=n) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(i==m-1 && j==n-1) return 1;
        int Bottom=Func(i+1,j,m,n);
        int Right=Func(i,j+1,m,n);
        return Dp[i][j]=Bottom+Right;
    }
    int uniquePaths(int m, int n) 
    {
        Dp.resize(m,vector<int>(n,-1));
        return Func(0,0,m,n);
    }
};