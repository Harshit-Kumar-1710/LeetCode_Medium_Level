class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int n=nums.size();
        set<int>s;
        for(auto i:nums)
        {
            if(s.find(i)==s.end())
            {
                s.insert(i);
            }
            else
            {
                return i;
            }
        }
    return -1;
    }
};