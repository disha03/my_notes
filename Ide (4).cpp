#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<bool>b;
vector<vector<int>>g;
void add(int u,int v)
{
    g[u].pb(v);
}
void bfs(int u)
{
    queue<int>q;
    b[u]=true;
    q.push(u);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        for(auto i=g[f].begin();i!=g[f].end();i++)
        {
            if(!b[*i])
            {
                q.push(*i);
                b[*i]=true;
            }
        }
    }
}
int main(){
    int v,u,V,n,e;
    cin>>n>>e;
    b.assign(n,false);
    g.assign(n,vector<int>());
    for(int i=0;i<e;i++)
    {
        cin>>u>>v;
        add(u,v);
    }
    for(int i=0;i<n;i++)
    {
        if(!b[i]){bfs(i);}
    }
    
}