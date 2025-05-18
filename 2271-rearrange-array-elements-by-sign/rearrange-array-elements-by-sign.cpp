class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> ans(nums.size(),0);
        int Positive=0,Negative=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                ans[Positive]=nums[i];
                Positive+=2;
            }
            else
            {
                ans[Negative]=nums[i];
                Negative+=2;
            }
        }
    return ans;
    }
};