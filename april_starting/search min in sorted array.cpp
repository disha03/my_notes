int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int start=0,end=A.size()-1,n=A.size(),index=0,mid,prev,next;
    while(start<=end)
    {
        if(start==end)
        {
            return A[start];
        }
        mid=start+(end-start)/2;
        if(mid!=0){
        prev=mid-1;
        }
        else{
            prev=A.size()-1;
        }
        if(mid!=n-1){
        next =mid+1;
        }
        else{
            next=0;
        }
        if(A[mid]<=A[prev] && A[mid]<=A[next])
        {
            return A[mid];
            
        }
         else if(A[mid]<=A[end]){
            end=mid;
        }
        else if(A[mid]>=A[start])
        {
            start=mid;
        }
       
        
        
    }
    return A[0];
    
}
