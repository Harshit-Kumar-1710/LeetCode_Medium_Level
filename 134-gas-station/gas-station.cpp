class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int n=gas.size(),TotalGas=0,TotalCost=0;
        for(auto val:gas)
        {
            TotalGas+=val;
        }
        for(auto val:cost)
        {
            TotalCost+=val;
        }
        if(TotalCost>TotalGas) return -1;
        int CurrentInd=0,CurrentGas=0;
        // Only a Unique Solution exists.
        for(int i=0;i<n;i++)
        {
            CurrentGas+=(gas[i]-cost[i]);
            if(CurrentGas<0)
            {
                CurrentInd=i+1;
                CurrentGas=0;
            }
        }
        return CurrentInd;
        
    }
};