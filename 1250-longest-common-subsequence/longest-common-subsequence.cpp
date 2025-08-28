class Solution {
public:
    vector<vector<int>>Dp;
    int Func(int i,int j,string&text1,string&text2)
    {
        if(i==text1.size() || j==text2.size())
        {
            return 0;
        }
        else if(Dp[i][j]!=-1) return Dp[i][j];
        else
        {
                if(text1[i]==text2[j])
                {
                    return Dp[i][j]=1+Func(i+1,j+1,text1,text2);
                }
                else
                {
                    return Dp[i][j]=max(Func(i,j+1,text1,text2),Func(i+1,j,text1,text2));  
                }
        }
    return -1;
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        Dp.resize(n,vector<int>(m,-1));
        return Func(0,0,text1,text2);
        
    }
};