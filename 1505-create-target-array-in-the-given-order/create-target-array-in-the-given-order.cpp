class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) 
    {
        int n=nums.size();
        vector<int>Vec;
        for(int i=0;i<n;i++)
        {
            Vec.insert(Vec.begin()+index[i],nums[i]);
        }

    return Vec;
    }
};