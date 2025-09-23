class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>Vec(n+1);
        for(int i=0;i<=n;i++)
        {
            Vec[i]=Vec[i>>1]+(i&1);
        }
    return Vec;
    }
};