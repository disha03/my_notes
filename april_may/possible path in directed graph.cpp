// { Driver Code Starts
//https://practice.geeksforgeeks.org/problems/possible-paths-between-2-vertices-1587115620/1/?track=P100-Graph&batchId=197
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    //Function to count paths between two vertices in a directed graph.
    int c=0;
    void bfs(int source, int destination,vector<int> adj[],vector<bool>&vis,int V)
    {
        
        
            if(source==destination)
            {c++;
            
            }
            vis[source]=true;
            for(int i=0;i<adj[source].size();i++)
            {
                if(vis[adj[source][i]]==false)
                {
                    bfs(adj[source][i],destination,adj,vis,V);
                }
            }
            vis[source]=false;
        
        
    }
	int countPaths(int V, vector<int> adj[], int source, int destination)
	{
	    // Code here
	    vector<bool>vis(V+2,false);
	    bfs(source,destination,adj,vis,V);
	    return c;
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;
    	vector<int> adj[V];
    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		// adj[v].push_back(u);
    	}
    	int source, destination;
    	cin >> source >> destination;
        Solution obj;
        cout<<obj.countPaths(V, adj,source,destination)<<endl;
	}
	return 0;
}  // } Driver Code Ends