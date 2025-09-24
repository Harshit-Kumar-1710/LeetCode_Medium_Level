class Solution {
public:
    string addStrings(string num1, string num2) 
    {
        int n=num1.size(),m=num2.size();
        int i=n-1,j=m-1,c=0;
        string str;
        while(i>=0 && j>=0)
        {
                if(c==0)
                {
                    int char1=num1[i]-'0';
                    int char2=num2[j]-'0';
                    int sum=char1+char2;
                    if(sum>9)
                    {
                        int rem=sum%10;
                        char character=rem+'0';
                        sum=sum/10;
                        c=sum;
                        str.push_back(character);
                    }
                    else
                    {
                        char character=sum+'0';
                        str.push_back(character);
                    }
                }
                else
                {
                    int char1=num1[i]-'0';
                    int char2=num2[j]-'0';
                    int sum=c+char1+char2;
                    if(sum>9)
                    {
                        int rem=sum%10;
                        char character=rem+'0';
                        sum=sum/10;
                        c=sum;
                        str.push_back(character);
                    }
                    else
                    {
                        c=0;
                        char character=sum+'0';
                        str.push_back(character);
                    }
                }
                i--;
                j--;
            }
            while(i>=0)
            {
                int num=num1[i]-'0';
                num=num+c;
                if(num>9)
                {
                    int rem=num%10;
                    char character=rem+'0';
                    str.push_back(character);
                    num=num/10;
                    c=num;
                }
                else
                {
                    char character=num+'0';
                    str.push_back(character);
                    c=0;
                }
                i--;
            }
            while(j>=0)
            {
                int num=num2[j]-'0';
                num=num+c;
                if(num>9)
                {
                    int rem=num%10;
                    char character=rem+'0';
                    str.push_back(character);
                    num=num/10;
                    c=num;
                }
                else
                {
                    char character=num+'0';
                    str.push_back(character);
                    c=0;
                }
                j--;
            }
            if(c!=0)
            {
                    char character=c+'0';
                    str.push_back(character);
            }
        reverse(str.begin(),str.end());
        return str; 
        }
};