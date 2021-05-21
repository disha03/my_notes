/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval a,Interval b)
 {
     return a.start<b.start;
 }
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(newInterval.start>newInterval.end)
    {
        swap(newInterval.start,newInterval.end);
    }
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end(),cmp);
    int n=intervals.size();
    vector<Interval>v;
    int k=0,mini,maxi;
    for(int i=0;i<intervals.size()-1;i=k)
    {
        
        k=i;
        if(intervals[k].end>=intervals[k+1].start){
        mini=intervals[k].start,maxi=intervals[k].end;
        while(k<n-1 && intervals[k+1].start<=maxi)
        {
            mini=min(mini,intervals[k+1].start);
            maxi=max(maxi,intervals[k+1].end);
            k++;
            
          
        }
        Interval h;
        h.start=mini;
        h.end=maxi;
        v.push_back(h);
        k++;
        }
        else{
            v.push_back(intervals[i]);
            k++;
        }
        
    }
    if(k==n-1)
        {
             v.push_back(intervals[k]);
        }
    return v;
    
    
}
