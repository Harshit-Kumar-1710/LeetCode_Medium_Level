class Solution {
public:
    vector<int>Dp;
    int Func(int i,string&s)
    {
        if(i==s.size()) return 1;
        if(s[i]=='0') return 0;
        if(Dp[i]!=-1) return Dp[i];
        int Ways=Func(i+1,s);
        if(i+1<s.size())
        {
            int Number=(s[i]-'0')*10+(s[i+1]-'0');
            if(Number>=10 && Number <=26)
            {
                Ways+=Func(i+2,s);
            }
        }
        return Dp[i]=Ways;
    }
    int numDecodings(string s) 
    {
        Dp.resize(s.size(),-1);
        int n=s.size();
        return Func(0,s);    
    }
};