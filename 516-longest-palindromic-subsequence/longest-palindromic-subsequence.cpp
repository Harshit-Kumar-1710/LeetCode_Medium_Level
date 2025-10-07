class Solution {
public:
    vector<vector<int>>Dp;
    int LCS(int i,int j,string &s,string &str,int size1,int size2)
    {
        if(i==size1 || j==size2) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(s[i]==str[j])
        {
            return Dp[i][j]=1+LCS(i+1,j+1,s,str,size1,size2);
        }
        return Dp[i][j]=max(LCS(i,j+1,s,str,size1,size2),LCS(i+1,j,s,str,size1,size2));
    }
    int longestPalindromeSubseq(string s) 
    {
        int n=s.size();
        string str=s;
        Dp.resize(n,vector<int>(n,-1));
        reverse(str.begin(),str.end());
        return LCS(0,0,s,str,n,n);
    }
};