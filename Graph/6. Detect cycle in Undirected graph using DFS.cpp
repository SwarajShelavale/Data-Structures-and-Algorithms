//Detect loop in Undirected Graph

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    bool dfs(int s,int parent,vector<int>&visited,vector<int> adj[])
    {
        visited[s]=1;
        for(auto x:adj[s])
        {
            if(visited[x]==0)
            {
                bool ans2=dfs(x,s,visited,adj);
                if(ans2)
                    return true;
            }
            else if(x!=parent)
                return true;
        }
        return false;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    vector<int>visited(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==0)
	        {
	            bool ans=dfs(i,-1,visited,adj);
	            if(ans)
	                return true;
	        }
	    }
	    return false;
	}
	
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
