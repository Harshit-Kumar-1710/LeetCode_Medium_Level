class Solution {
public:
    string addBinary(string a, string b) 
    {
        int n=a.size(),m=b.size();
        int i=n-1,j=m-1,c=0;
        string str;
        while(i>=0 && j>=0)
        {
            if(c==0)
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    str.push_back('0');
                    c=1;
                }
                else if(a[i]=='1' && b[j]=='0' || a[i]=='0' && b[j]=='1')
                {
                    str.push_back('1');
                }
                else if(a[i]=='0' && b[j]=='0')
                {
                    str.push_back('0');
                }
            }
            else
            {
                if(a[i]=='1' && b[j]=='1')
                {
                    str.push_back('1');
                }
                else if(a[i]=='1' && b[j]=='0' || a[i]=='0' && b[j]=='1')
                {
                    str.push_back('0');
                }
                else if(a[i]=='0' && b[j]=='0')
                {
                    str.push_back('1');
                    c=0;
                }
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            if(c==1)
            {
                if(a[i]=='1')
                {
                    str.push_back('0');
                }
                else
                {
                    str.push_back('1');
                    c=0;
                }
            }
            else
            {
                if(a[i]=='1')
                {
                    str.push_back('1');
                }
                else
                {
                    str.push_back('0');
                }
            }
            i--;
        }
        while(j>=0)
        {
            if(c==1)
            {
                if(b[j]=='1')
                {
                    str.push_back('0');
                }
                else
                {
                    str.push_back('1');
                    c=0;
                }
            }
            else
            {
                if(b[j]=='1')
                {
                    str.push_back('1');
                }
                else
                {
                    str.push_back('0');
                }
            }
            j--;
        }
        if(c==1) str.push_back('1');
        reverse(str.begin(),str.end());
        return str;
        /*int num=stoi(a);
        int p=0,q=0,c=0;
        while(num!=0)
        {
            int rem=n1%10;
            p+=rem*(pow(2,c));
            c++;
        }
        c=0;
        num=stoi(b);
        while(num!=0)
        {
            int rem=num%10;
            q+=rem*(pow(2,c));
            c++;
        }
        int k=p+q;

    return p+q;*/
    }
};