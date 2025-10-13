class Solution {
public:
    int longestBalanced(string s) 
    {
        int n=s.size();
        int MaxLen=0;
        for(int i=0;i<n;i++)
            {
                vector<int>Freq(26,0);
                for(int j=i;j<n;j++)
                    {
                          Freq[s[j]-'a']++;
                          int FirstFreq=0;
                          bool Balanced=true;
                          for(int i=0;i<26;i++)
                          {
                            if(Freq[i]>0)
                            {
                                if(FirstFreq==0)
                                {
                                    FirstFreq=Freq[i];
                                }
                                else if(Freq[i]!=FirstFreq)
                                {
                                    Balanced=false;
                                    break;
                                }
                            }
                          }
                          if(Balanced)
                          {
                                MaxLen=max(MaxLen,j-i+1);
                          }
                    }
            }
    return MaxLen;
    }
};