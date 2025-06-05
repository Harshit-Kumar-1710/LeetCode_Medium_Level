class Solution {
private:
    bool IsValidSubArray(vector<int>&nums,int len,int target)
    {
        int sum=0;
        for(int i=0;i<len;i++)
        sum+=nums[i];
        if(sum>=target)
        {
            return true;
        }
        for(int i=len;i<nums.size();i++)
        {
            sum+=nums[i];
            sum-=nums[i-len];
            if(sum>=target)
            {
                return true;
            }
        }
    return false;
    }
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int low=1,high=nums.size(),ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(IsValidSubArray(nums,mid,target))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
    return ans;
    }
};