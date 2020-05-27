class Solution {
public:
    set<int> s[2];
    bool dfs(int node, vector<vector<int>> &g, int flag){
        int f = 1 - flag;
        if(s[f].count(node)) return false;
        s[flag].insert(node);
        for(int i = 0; i < g[node].size(); i++){
            int u = g[node][i];
            if(!s[f].count(u) && !dfs(u, g, f)) return false;
      }
      return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        if(N==1) return true;
        vector<vector<int>> g(N+1);
        for(int i=0;i<dislikes.size();i++){
            g[dislikes[i][0]].push_back(dislikes[i][1]);
            g[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        for(int i=1;i<=N;i++){
            if(!s[0].count(i) && !s[1].count(i)){
                if(!dfs(i, g, 0)) return false;
            }
        }
        return true;
    }
};
