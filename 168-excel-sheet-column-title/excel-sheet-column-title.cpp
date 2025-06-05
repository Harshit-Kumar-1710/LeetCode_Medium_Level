class Solution {
    private:
        string FindTitle(int ColumnNumber)
        {
            string str;
            char ch=ColumnNumber+'A'-1;
            str+=ch;
            return str;
        }
public:
    string convertToTitle(int columnNumber) 
    {
        string s;
        if(columnNumber>=1 && columnNumber<=26)
        {
            s=FindTitle(columnNumber);   
        }
        else
        {
            while(columnNumber>0)
            {
                columnNumber--;
                char c='A'+(columnNumber%26);
                s=c+s;
                columnNumber/=26;
            }
        }
    return s;
    }
};