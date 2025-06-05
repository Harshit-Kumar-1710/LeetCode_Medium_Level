class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int Sum=0,MinLen=0,Left=0,i;
        for(int Right=0;Right<nums.size();Right++)
        {
            Sum+=nums[Right];
            while(Sum>=target)
            {
                if(MinLen==0)
                {
                    MinLen=Right-Left+1;
                }
                else
                {
                    MinLen=min(MinLen,Right-Left+1);
                }
                Sum-=nums[Left];
                Left++;
            }
        }
    return MinLen;
    }
};