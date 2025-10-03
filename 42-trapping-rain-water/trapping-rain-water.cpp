class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        int Answer=0;
        int LeftMaxHeight=0,RightMaxHeight=0;
        int i=0,j=n-1;
        while(i<j)
        {
            LeftMaxHeight=max(LeftMaxHeight,height[i]);
            RightMaxHeight=max(RightMaxHeight,height[j]);
            if(LeftMaxHeight<RightMaxHeight)
            {
                Answer+=LeftMaxHeight-height[i];
                i++;
            }
            else
            {
                Answer+=RightMaxHeight-height[j];
                j--;
            }
        }
    return Answer;
    }
};