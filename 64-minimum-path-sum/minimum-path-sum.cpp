class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,int n,int m,vector<vector<int>>&grid)
    {
        if(i>=n || j>=m) return 1e9;
        else if(i==n-1 && j==m-1)
        {
            return grid[i][j];
        }
        else if(Dp[i][j]!=-1) return Dp[i][j];
        int p=grid[i][j]+Func(i+1,j,n,m,grid);
        int q=grid[i][j]+Func(i,j+1,n,m,grid);
        return Dp[i][j]=min(p,q);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        Dp.resize(n,vector<int>(m,-1));
        return Func(0,0,n,m,grid);
        
    }
};