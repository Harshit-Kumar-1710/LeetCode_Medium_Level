class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int n=sentences.size(),MaxLen=INT_MIN,c;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {
                    c++;
                }
                else if(j==sentences[i].size()-1)
                {
                    c++;
                }
            MaxLen=max(MaxLen,c);
            }
        }
    return MaxLen;
    }
};