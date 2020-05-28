class Solution {
public:
    /* TLE
    int countbit(int n){
        if(n==0) return 0;
        return (n&1) + countbit(n>>1);
    }*/
    vector<int> countBits(int num) {
        //vector<int> ans;
        //for(int i=0;i<=num;i++) ans.push_back(countbit(i));   //TLE
        /* using builtin function
        for(int i=0;i<=num;i++){
            bitset<32> bit(i);
            ans.push_back(bit.count());
        }
        return ans;
        */
        vector<int> dp(num+1,0);
        for(int i=1;i<=num;i++) dp[i]=dp[i/2]+i%2;
        return dp;
    }
};
