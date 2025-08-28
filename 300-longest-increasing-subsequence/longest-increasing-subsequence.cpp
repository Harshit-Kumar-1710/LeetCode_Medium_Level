class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int>Vec;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                Vec.push_back(nums[i]);
            }
            else
            {
                int ind=lower_bound(Vec.begin(),Vec.end(),nums[i])-Vec.begin();
                if(ind==Vec.size())
                {
                    Vec.push_back(nums[i]);
                }
                else
                {
                    Vec[ind]=nums[i];
                }
            }
        }
    return Vec.size();
    }
};