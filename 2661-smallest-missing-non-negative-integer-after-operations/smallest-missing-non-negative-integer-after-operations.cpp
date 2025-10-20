class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) 
    {
        int n=nums.size();
        vector<int>Freq(value,0);
        for(auto num:nums)
        {
            Freq[((num%value)+value)%value]++;
        }
        int MEX=0;
        while(true)
        {
            if(Freq[MEX%value]>0)
            {
                Freq[MEX%value]--;
                MEX++;
            }
            else
            {
                break;
            }
        }
    return MEX;
    }
};