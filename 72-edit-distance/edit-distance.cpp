class Solution {
public:
    vector<vector<int>>Vec;
    int Func(int i,int j,string &s1,string &s2)
    {
        if(j<0) return i+1;
        if(i<0) return j+1;
        if(Vec[i][j]!=-1) return Vec[i][j];
        if(s1[i]==s2[j]) return Vec[i][j]=Func(i-1,j-1,s1,s2);
        else
        {
            return Vec[i][j]=1+min({Func(i-1,j-1,s1,s2),Func(i,j-1,s1,s2),Func(i-1,j,s1,s2)});
        }
    }
    int minDistance(string word1, string word2) 
    {
        int n=word1.size();
        int m=word2.size();
        Vec.resize(n,vector<int>(m,-1));
        return Func(n-1,m-1,word1,word2);
        
    }
};