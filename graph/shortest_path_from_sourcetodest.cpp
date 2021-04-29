vector<int>x{1,0,-1,0};
vector<int>y{0,1,0,-1};
bool check(int x,int y,vector<vector<bool>>&vis,vector<vector<int>>v,int n,int m)
{
    if(x<0 || y<0 || x>=n || y>=m || vis[x][y]==true || v[x][y]==0)
    {
        return false;
    }
    return true;
}
int bfs(int s1,int s2,vector<vector<bool>>&vis,vector<vector<int>>level,vector<vector<int>>v,int d1,int d2,int n,int m)
{
    queue<pair<int,int>>q;
    q.push({s1,s2});
    vis[s1][s2]=true;
    while(!q.empty())
    {
        pair<int,int>l;
        l=q.front();
        if(d1==l.first && d2==l.second)
        {
            return level[d1][d2];
        }
        q.pop();
        for(int i=0;i<4;i++)
        {
            int f=l.first+x[i];
            int g=l.second+y[i];
            if(check(f,g,vis,v,n,m))
            {
                vis[f][g]=true;
                level[f][g]=level[l.first][l.second]+1;
                q.push({f,g});
            }
        }
    }
    return -1;
}
//************************************************************************
int main() {
	int i,j,n,m,k,l,c,t,s1,s2,d1,d2;
	cin>>t;
	while(t--)
	{
	    
	    cin>>n>>m;
	    vector<vector<int>>v{n+1,vector<int>(m+1)};
	     vector<vector<bool>>vis{n+1,vector<bool>(m+1)};
	      vector<vector<int>>level{n+1,vector<int>(m+1)};
	      
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            cin>>v[i][j];
	            vis[i][j]=false;
	            level[i][j]=0;
	        }
	    }
	     cin>>d1>>d2;
	    if(v[0][0]==0)
	      {
	          cout<<"-1"<<"\n";
	      }
	    else{
	    cout<<bfs(0,0,vis,level,v,d1,d2,n,m)<<"\n";
	    }
	}
	return 0;
}