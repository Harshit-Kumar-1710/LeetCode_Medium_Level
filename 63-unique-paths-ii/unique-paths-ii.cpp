class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,int n,int m,vector<vector<int>>obstacleGrid)
    {
        if(i>=n || j>=m) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(obstacleGrid[i][j]==1) return 0;
        if(i==n-1 && j==m-1) return 1;
        int Bottom=Func(i+1,j,n,m,obstacleGrid);
        int Right=Func(i,j+1,n,m,obstacleGrid);
        return Dp[i][j]=Bottom+Right;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        Dp.resize(n,vector<int>(m,-1));
        return Func(0,0,n,m,obstacleGrid);
        
    }
};