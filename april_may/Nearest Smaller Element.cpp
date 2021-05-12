vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int>s;
    vector<int>v;
    for(int i=0;i<A.size();i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(s.top()<A[i])
        {
            v.push_back(s.top());
        }
        else{
            while(s.empty()==false && s.top()>=A[i])
            {
                s.pop();
            }
            if(s.empty()==false)
            {
                v.push_back(s.top());
            
            }
            else{
                v.push_back(-1);
            }
        }
        s.push(A[i]);
    }
    return v;
}
