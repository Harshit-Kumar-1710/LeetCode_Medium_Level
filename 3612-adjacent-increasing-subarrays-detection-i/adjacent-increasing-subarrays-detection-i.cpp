class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) 
    {
        int n=nums.size();
        vector<int>IncLeft(n,1);
        vector<int>IncRight(n,1);
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                IncLeft[i]=IncLeft[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                IncRight[i]=IncRight[i+1]+1;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(IncLeft[i]>=k)
            {
                if(IncRight[i+1]>=k)
                {
                    return true;
                }
            }
        }
    return false;
    }
};