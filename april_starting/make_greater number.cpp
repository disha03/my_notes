#include<bits/stdc++.h>
bool cmp(int x,int y)
{
    
        string st1 = to_string(x);
string st2 = to_string(y);
return (st1+st2)>(st2+st1);
    
}
string Solution::largestNumber(const vector<int> &A) {
    int j=0,a;
    int n=A.size();
    string p,k;
    bool flag=true;
    vector<int>B(A);
       sort(B.begin(),B.end(),cmp);
       for (int i = 0; i < B.size(); i++) 
       { 
          if(B[i]==0 && flag){
          continue;
          }
          cout<<B[i];
          flag=false;
       }
       if(flag)
       {
           return "0";
       }
     
     return "";
    
}
