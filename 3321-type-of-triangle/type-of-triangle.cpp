class Solution {
public:
    string triangleType(vector<int>& nums) 
    {
        int Element1=nums[0],Element2 =nums[1],Element3=nums[2];
        int Sum1=nums[0]+nums[1];
        int Sum2=nums[1]+nums[2];
        int Sum3=nums[0]+nums[2];
        if(Sum1>Element3 && Sum2>Element1 && Sum3>Element2)
        {
            if(Element3==Element2 && Element2==Element1)
            {
                return "equilateral";
            }
            else if(Element3==Element2 || Element2==Element1 || Element3==Element1)
            {
                return "isosceles";
            }
            else
            {
                return "scalene";
            }
        }
        else
        {
            return "none";
        }
    return "";
    }
};