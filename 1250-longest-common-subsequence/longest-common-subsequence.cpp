class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,string&s1,string&s2)
    {
        if(i<0 || j<0) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(s1[i]==s2[j]) Dp[i][j]=1+Func(i-1,j-1,s1,s2);
        else Dp[i][j]=max(Func(i-1,j,s1,s2),Func(i,j-1,s1,s2));
        return Dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        Dp.resize(text1.size(),vector<int>(text2.size(),-1));
        return Func(text1.size()-1,text2.size()-1,text1,text2);
    }
};