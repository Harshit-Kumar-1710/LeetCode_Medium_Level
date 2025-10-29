class Solution {
public:
    int Func(int i,int n,string s,int Sign,long long num,bool SignUsed,bool started)
    {
        if(i==n) return (int)(Sign*num);
        if(s[i]==' ' && !started && !SignUsed) return Func(i+1,n,s,Sign,num,SignUsed,started);
        if(!started && !SignUsed && (s[i]=='-' || s[i]=='+')) 
        {
            SignUsed=true;
            if(s[i]=='-') return Func(i+1,n,s,-1,num,SignUsed,started);
            else return Func(i+1,n,s,Sign,num,SignUsed,started);
        }
        if(s[i]>='0' && s[i]<='9')
        {
            started=true;
            num=num*10+(s[i]-'0');
            if(Sign==1 && num>INT_MAX) return INT_MAX;
            if(Sign==-1 && -num<INT_MIN) return INT_MIN;
            return Func(i+1,n,s,Sign,num,SignUsed,started);
        }
        return (int)(Sign*num);
    }
    int myAtoi(string s) 
    {
        int n=s.size(),Sign=1;
        long long num=0;
        return Func(0,n,s,Sign,num,false,false);
    }
};