class Solution {
public:
    vector<vector<int>>Dp;
    string LCS(int i,int j,string &s1,string &s2,int n,int m)
    {
        if(i==n || j==m) return "";
        if(s1[i]==s2[j]) return s1[i]+LCS(i+1,j+1,s1,s2,n,m);
        else
        {
            if(Dp[i+1][j]>Dp[i][j+1])
            {
                return LCS(i+1,j,s1,s2,n,m);
            }
            else
            {
                return LCS(i,j+1,s1,s2,n,m);
            }
        }
    }
    int Func(int i,int j,string &s1,string &s2,int n,int m)
    {
        if(i==n || j==m)
        { 
            return 0;
        }
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(s1[i]==s2[j])
        {
            return Dp[i][j]=1+Func(i+1,j+1,s1,s2,n,m);
        }
        return Dp[i][j]=max(Func(i,j+1,s1,s2,n,m),Func(i+1,j,s1,s2,n,m));
    }
    string shortestCommonSupersequence(string str1, string str2) 
    {
        int n=str1.size();
        int m=str2.size();
        Dp.resize(n+1,vector<int>(m+1,-1));
        int sizeLCS=Func(0,0,str1,str2,n,m);
        string str=LCS(0,0,str1,str2,n,m);
        int i=0,j=0,k=0;
        string final;
        while(i<n && j<m)
        {
            if(str1[i]!=str[k])
            {
                final+=str1[i];
                i++;
            }
            else if(str2[j]!=str[k])
            {
                final+=str2[j];
                j++;
            }
            else
            {
                final+=str[k];
                k++;
                i++;
                j++;
            }
        }
        while(i<n)
        {
            final+=str1[i];
            i++;
        }
        while(j<m)
        {
            final+=str2[j];
            j++;
        }
    return final;
    }
};