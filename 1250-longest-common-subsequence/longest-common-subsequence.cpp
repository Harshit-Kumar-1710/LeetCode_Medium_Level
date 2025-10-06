class Solution {
public:
    vector<vector<int>>Dp;
    int LCS(int i,int j,string &t1,string &t2)
    {
        if(i<0 || j<0) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(t1[i]==t2[j]) return Dp[i][j]=1+LCS(i-1,j-1,t1,t2);
        else return Dp[i][j]=max(LCS(i-1,j,t1,t2),LCS(i,j-1,t1,t2));
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        Dp.resize(n,vector<int>(m,-1));
        return LCS(n-1,m-1,text1,text2);
    }
};