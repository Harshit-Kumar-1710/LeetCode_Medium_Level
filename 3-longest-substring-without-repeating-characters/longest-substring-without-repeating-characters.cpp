class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int hash[256],l=0,r=0,n=s.size(),maxlen=0;
        fill(begin(hash),end(hash),-1);
        while(r<n)
        {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l)
                {
                    l=hash[s[r]]+1;
                }
            }
            maxlen=max(maxlen,r-l+1);
            hash[s[r]]=r;
            r++;
        }
    return maxlen;
    }
};