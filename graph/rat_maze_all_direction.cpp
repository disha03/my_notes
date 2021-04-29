// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
public:
//***********************************************************************************
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
char c[4]={'U','R','D','L'};
int count=0;  //if ask number of unique paths
bool check(int x,int y,vector<vector<int>> &m,int n,int vis[1000][1000])
    {
    	if(x<0 || y<0 || x>=n || y>=n || vis[x][y]==1 || m[x][y]==0 )
    	{
    		return false;
    	}
    	
    		return true;
    	
    }
void sol(int x,int y,vector<vector<int>> &m, int n,vector<string>&se,string s,int vis[1000][1000])
    {
        if(x==n-1 && y==n-1)
        {
            se.push_back(s);
            count++;        //counting paths
            return ;
        }
        for(int i=0;i<4;i++)
        {
            int f=x+dx[i];
            int h=y+dy[i];
            if(check(f,h,m,n,vis))
            {
                s+=c[i];
                vis[f][h]=true;
                sol(f,h,m,n,se,s,vis);
                vis[f][h]=false;
                s.pop_back();
            }
        }
           
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        int vis[1000][1000];
        count=0;
        memset(vis,0,sizeof(vis));
        vector<string>se;
        if(m[0][0]==0 || m[n-1][n-1]==0)
        {
            return se;
        }
        string s;
        vis[0][0]=1;
        sol(0,0,m,n,se,s,vis);
        sort(se.begin(),se.end()); //ask in sorted order
        return se;
    }
};

//*********************************************************************************   


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends