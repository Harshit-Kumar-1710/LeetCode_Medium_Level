class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        auto it=m.begin();
        int Maximum=it->second;
        for(auto p:m)
        {
            if(p.second>Maximum)
            {
                Maximum=p.second;
            }
        }
        int c=0;
        for(auto p:m)
        {
            if(p.second==Maximum)
            {
                c+=p.second;
            }
        }
    return c;
    }
};