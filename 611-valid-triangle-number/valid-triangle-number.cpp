class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
        int n=nums.size(),c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                int sum=nums[i]+nums[j];
                int Low=j+1,High=n-1,k=j;
                while(Low<=High)
                {
                    int mid=Low+(High-Low)/2;
                    if(nums[mid]<sum)
                    {
                        k=mid; // Finding the Largest Index K such that nums[k]<(nums[i]+nums[j])
                        Low=mid+1;
                    }
                    else
                    {
                        High=mid-1;
                    }
                }
                c+=(k-j);
            }
        }
    return c;
    }
};