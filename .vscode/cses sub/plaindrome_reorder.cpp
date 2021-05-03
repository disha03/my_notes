#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,pro=1,c=-1,k=0,j;
    string s;
    cin>>s;
    n=s.size();
    vector<int>v(27,0);
     //cout<<char('A'+2)<<"\n";
    for(int i=0;i<n;i++)
    {
        v[s[i]-'A']++;
    }
    j=n-1;
    if(n%2==1)
    {
        for(int i=0;i<26;i++)
        {
            //cout<<v[i]<<"\n";
            if(c!=-1 && v[i]%2==1)
            {
                cout<<"NO SOLUTION"<<"\n";
                return 0;
            }
            else if(v[i]%2==1)
            {
                
                
                s[n/2]=char('A'+i);
                //cout<<n/2<<" ";
                c=i;
            }
            else{
                while(v[i]>0  && k<j)
                {
                    s[k]=char('A'+i);
                    s[j]=char('A'+i);
                    //cout<<k<<" "<<j<<" ";
                    k++;
                    j--;
                   v[i]-=2;
                   //cout<<v[i]<<" ";
                }
            }
        }
        for(int i=k;i<=j;i++)
        {
            s[i]=char('A'+c);
        }
        //cout<<s<<"\n";
    }
    
    else{
        for(int i=0;i<26;i++)
        {
            if(v[i]%2==1)
            {
                cout<<"NO SOLUTION"<<"\n";
                return 0;
            }
            else{
               while(v[i]>0 && k<j)
                {
                    s[k]=char('A'+i);
                    s[j]=char('A'+i);
                    //cout<<s[k]<<" "<<s[j]<<" ";
                    k++;
                    j--;
                    v[i]-=2;
                    
                }
            }
            
        }
        //cout<<s<<"\n";
    }
    cout<<s<<"\n";
    
}