class Solution {
public:
    vector<int> Func(string expression)
    {
        vector<int>Vec;
        for(int i=0;i<expression.size();i++)
        {
            if(expression[i]=='+' || expression[i]=='*' || expression[i]=='-')
            {
                vector<int>LeftSide=Func(expression.substr(0,i));
                vector<int>RightSide=Func(expression.substr(i+1));
                for(auto val:LeftSide)
                {
                    for(auto v:RightSide)
                    {
                        if(expression[i]=='+')
                        {
                            Vec.push_back(v+val);
                        }
                        else if(expression[i]=='*')
                        {
                            Vec.push_back(val*v);
                        }
                        else
                        {
                            Vec.push_back(val-v);
                        }
                    }
                }
            }
        }
        if(Vec.empty())
            {
                int res=stoi(expression);
                Vec.push_back(res);
            }
        return Vec;
        }
    vector<int> diffWaysToCompute(string expression) 
    {
        int n=expression.size();
        return Func(expression);    
    }
};