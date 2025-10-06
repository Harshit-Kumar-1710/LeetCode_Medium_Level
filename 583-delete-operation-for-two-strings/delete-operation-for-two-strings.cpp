class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,string &word1,string &word2)
    {
        if(i<0 || j<0)
        {
            return 0;
        }
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(word1[i]==word2[j])
        {
            return Dp[i][j]=1+Func(i-1,j-1,word1,word2);
        }
        return Dp[i][j]=max(Func(i-1,j,word1,word2),Func(i,j-1,word1,word2));
    }
    int minDistance(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        Dp.resize(n,vector<int>(m,-1));
        int k=Func(n-1,m-1,word1,word2);
        return (n-k)+(m-k);
    }
};