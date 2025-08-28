class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int Low=0,High=m-1;
            while(Low<=High)
            {
                int mid=Low+(High-Low)/2;
                if(matrix[i][mid]==target)
                {
                    return true;
                }
                else if(matrix[i][mid]<target)
                {
                    Low=mid+1;
                }
                else
                {
                    High=mid-1;
                }
            }
        }
    return false;
    }
};