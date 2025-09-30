class Solution {
public:
    vector<vector<int>>Dp;
    bool Func(int jump,int index,int n,vector<int>&stones,unordered_map<int,int>&M)
    {
        if(index==n-1) return true;
        if(Dp[index][jump]!=-1) return Dp[index][jump];
        for(int step=jump-1;step<=jump+1;step++)
        {
            if(step<=0) continue;
            if(M.count(stones[index]+step))
            {
                int nextstep=M[stones[index]+step];
                if(Func(step,nextstep,n,stones,M))
                {
                    return Dp[index][jump]=true;
                }
            }
        }
        return Dp[index][jump]=false;
    }
    bool canCross(vector<int>& stones) 
    {
        int n=stones.size();
        unordered_map<int,int>M;
        Dp.resize(n,vector<int>(n,-1));
        for(int i=0;i<n;i++)
        {
            M[stones[i]]=i;
        }
        return Func(0,0,n,stones,M);    
    }
};