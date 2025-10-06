class Solution {
public:
    vector<vector<int>>Dp;
    int LCS(int i,int j,int n,int m,string &t1,string &t2)
    {
        if(i==n || j==m) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(t1[i]==t2[j]) return Dp[i][j]=1+LCS(i+1,j+1,n,m,t1,t2);
        else return Dp[i][j]=max(LCS(i+1,j,n,m,t1,t2),LCS(i,j+1,n,m,t1,t2));
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        Dp.resize(n,vector<int>(m,-1));
        return LCS(0,0,n,m,text1,text2);
    }
};