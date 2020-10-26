#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<bool>b;
vector<vector<int>>g;
int p;
int l[100000];
void add(int u,int v)
{
    g[u].pb(v);
    g[v].pb(u);
}
void bfs(int u,int x)
{
     l[u]=1;
    queue<int>q;
    b[u]=true;
    q.push(u);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        
        //cout<<f<<" ";
        for(int i=0;i<g[f].size();i++)
        {
            if(!b[g[f][i]])
            {
				l[g[f][i]]=l[f]+1;
                if(l[g[f][i]]==x)
                 {
                  p++;
                }
                q.push(g[f][i]);
                b[g[f][i]]=true;
            }
            
			
        }
        
        
		
    }
    //cout<<p<<"->"<<c<<" ";
    //return c;
	
}
int main(){
    int v,u,V,n,e,x;
    cin>>n;
    b.assign(n+1,false);
    g.assign(n+1,vector<int>());
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        add(u,v);
    }
	cin>>x;
    bfs(1,x);

    cout<<p<<"\n";
	
    
}
