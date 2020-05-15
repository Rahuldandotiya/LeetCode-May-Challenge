class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int m=INT_MIN;
        int s1=0,s2=0,mi=INT_MAX,ts=0;
        for(int i=0;i<A.size();i++){
            ts+=A[i];
            s1+=A[i];
            s2+=A[i];
            m=max(m,s1);
            if(s1<0) s1=0;
            mi=min(mi,s2);
            if(s2>0) s2=0;
        }
        if(ts==mi) return m;
        return max(m,(ts-mi));
    }
};
