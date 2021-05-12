vector<int> Solution::getRow(int A) {
    vector<int>pre,curr;
    pre.push_back(1);
    if(A==0)
    {
        return pre;
    }
    while(A--)
    {
        curr.clear();
        curr.push_back(pre[0]);
        for(int i=0;i<pre.size()-1;i++)
        {
            curr.push_back(pre[i]+pre[i+1]);
        }
        curr.push_back(pre[pre.size()-1]);
        pre.clear();
        pre=curr;
    }
    return pre;
}
