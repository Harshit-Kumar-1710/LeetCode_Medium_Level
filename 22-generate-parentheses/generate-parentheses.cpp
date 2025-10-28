class Solution {
public:
    vector<string>Ans;
    void Func(int o,int c,string s,int n)
    {
        if(o==n && c==n)
        {
            Ans.push_back(s);
            return;
        }
        if(o<n) Func(o+1,c,s+"(",n);
        if(c<o) Func(o,c+1,s+")",n);
        return;
    }
    vector<string> generateParenthesis(int n) 
    {
        Func(0,0,"",n);
        return Ans;
    }
};