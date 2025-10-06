class Solution {
public:
    int longestSubsequence(vector<int>& nums) 
    {
        int n=nums.size(),Xor=0,c=0;
        for(auto val:nums)
        {
            if(val==0) c++;
            Xor^=val;
        }
        if(Xor==0) 
        {
            if(c==n) return 0;
            else return n-1;
        }
        else return n;
    }
};