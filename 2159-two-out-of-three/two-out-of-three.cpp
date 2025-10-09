class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        map<int,vector<int>>M;
        int n1=nums1.size();
        int n2=nums2.size();
        int n3=nums3.size();
        for(int i=0;i<n1;i++)
        {
            if(M.find(nums1[i])==M.end())
            {
                M[nums1[i]].push_back(1);
            }
        }
        for(int i=0;i<n2;i++)
        {
            if(M.find(nums2[i])==M.end())
            {
                M[nums2[i]].push_back(2);
            }
            else
            {
                if(M[nums2[i]].size()==1 && M[nums2[i]][0]==1)
                {
                    M[nums2[i]].push_back(2);
                }
            }
        }
        for(int i=0;i<n3;i++)
        {
            if(M.find(nums3[i])==M.end())
            {
                M[nums3[i]].push_back(3);
            }
            else
            {
                if(M[nums3[i]].size()==2 && M[nums3[i]].back()==2)
                {
                    M[nums3[i]].push_back(3);
                }
                else if(M[nums3[i]].size()<3 && M[nums3[i]][0]==1 || M[nums3[i]][0]==2)
                {
                    M[nums3[i]].push_back(3);
                }
            }
        }
        vector<int>Vec;
        for(auto p:M)
        {
            if(p.second.size()>=2)
            {
                Vec.push_back(p.first);
            }
        }
    return Vec;
    }
};