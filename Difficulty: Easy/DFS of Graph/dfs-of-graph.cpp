class Solution {
  private:
    void depthFirst(int node, vector<vector<int>>& adj, int vis[], vector<int>& dfsT){
        vis[node]=1;
        dfsT.push_back(node);
        
        for(auto it:adj[node]){
            if(!vis[it]){
                depthFirst(it, adj, vis, dfsT);
            }
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        int vis[n]={0};
        vector<int> dfsT;
        int start=0;
        
        depthFirst(start, adj, vis, dfsT);
        return dfsT;
        
    }
};