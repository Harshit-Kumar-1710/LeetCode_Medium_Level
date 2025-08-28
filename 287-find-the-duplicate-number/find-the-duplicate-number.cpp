class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>Frequency(n,0);
        for(auto i:nums)
        {
            if(Frequency[i]==0)
            {
                Frequency[i]+=1;
            }
            else
            {
                return i;
            }
        }
    return -1;
    }
};