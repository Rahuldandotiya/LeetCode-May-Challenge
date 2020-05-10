class Solution {
public:
    bool check(vector<int> v,int N,int num){
        set<int> s(v.begin(),v.end());
        if(v.size()==0) return false;
        for(int i=1;i<=N;i++){
            if(i!=num && s.find(i)==s.end()) return false;
        }
        return true;
    }
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1 && trust.size()==0) return 1;
        vector<vector<int>> v(N+1);
        vector<vector<int>> vi(N+1);
        for(int i=0;i<trust.size();i++){
            vi[trust[i][0]].push_back(trust[i][1]);
            v[trust[i][1]].push_back(trust[i][0]);
        }
        for(int i=1;i<=N;i++){
            if(check(v[i],N,i) && vi[i].size()==0) return i;
        }
        return -1;
    }
};
