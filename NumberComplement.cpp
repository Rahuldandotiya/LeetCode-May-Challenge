class Solution {
public:
    vector<int> v;
    void find(unsigned  n){
        if(n>1) find(n>>1);
        v.push_back(n&1);
    }
    int findComplement(int num) {
        if(num==0) return 1;
        if(num==1) return 0;
        find(num);
        int ans=0;
        int j=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==0){
                ans=ans+(pow(2,j));
            }
            j++;
        }
        return ans;
    }
};
