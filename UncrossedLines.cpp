class Solution {
public:
    int find(vector<int>& A, vector<int>& B,vector<vector<int>> &dp,int i,int j){
        if(i>=A.size() or j>=B.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int k=j;
        while(k<B.size() and B[k]!=A[i]) k++;
        int temp=0;
        if(k<B.size()) temp=1;
        int res=max(find(A,B,dp,i+1,j),temp+find(A,B,dp,i+1,k+1));
        dp[i][j]=res;
        return res;
    }
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int m=B.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return find(A,B,dp,0,0);
    }
};
