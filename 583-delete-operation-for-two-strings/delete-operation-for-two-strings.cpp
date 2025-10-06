class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,string &word1,string &word2)
    {
        if(i<0)
        {
            return word2.substr(0,j+1).length();
        }
        if(j<0)
        {
            return word1.substr(0,i+1).length();
        }
        if(Dp[i][j]!=-1) return Dp[i][j];
        if(word1[i]==word2[j])
        {
            return Dp[i][j]=Func(i-1,j-1,word1,word2);
        }
        return Dp[i][j]=min(1+Func(i-1,j,word1,word2),1+Func(i,j-1,word1,word2));
    }
    int minDistance(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        Dp.resize(n,vector<int>(m,-1));
        return Func(n-1,m-1,word1,word2);
        
    }
};