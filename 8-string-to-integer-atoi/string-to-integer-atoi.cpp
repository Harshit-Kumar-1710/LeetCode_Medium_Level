class Solution {
public:
    int myAtoi(string s) 
    {
        int n=s.size();
        int i=0,Negative=1;
        long long Num=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }
        if(i<n && (s[i]=='-' || s[i]=='+'))
        {
            if(s[i]=='-') Negative=-1;
            i++;
        }
                while(i<n && s[i]>='0' && s[i]<='9')
                {
                    Num=Num*10+(s[i]-'0');
                    if(Negative==1 && Num>INT_MAX)
                    {
                        return INT_MAX;
                    }
                    else if(Negative==-1 && -Num<INT_MIN)
                    {
                        return INT_MIN;
                    }
                i++;
                }
    return (int)(Num*Negative);
    }
};