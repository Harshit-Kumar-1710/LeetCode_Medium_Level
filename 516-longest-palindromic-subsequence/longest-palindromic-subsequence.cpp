class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,string&s)
    {
        if(i>j) return 0;
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(s[i]==s[j]) 
        {
            if(i==j) return Dp[i][j]=1+Func(i+1,j-1,s);
            else return Dp[i][j]=2+Func(i+1,j-1,s);
        }
        return Dp[i][j]=max(Func(i+1,j,s),Func(i,j-1,s));
    }
    int longestPalindromeSubseq(string s) 
    {
        int n=s.size();
        Dp.resize(n,vector<int>(n,-1));
        return Func(0,n-1,s);    
        
    }
};