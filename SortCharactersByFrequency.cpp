class Solution {
public:
    int c=0;
    int find(vector<int> &v){
        int m=v[0];
        for(int i=0;i<256;i++){
            if(m<v[i]){
                m=v[i];
                c=i;
            }
        }
        v[c]=0;
        return m;
    }
    string frequencySort(string s) {
        vector<int> v(256);
        for(int i=0;i<s.size();i++){
            int n=(int)s[i];
            v[n]++;
        }
        string ans="";
        for(int i=0;i<256;i++){
            int n=find(v);
            if(n==0) return ans;
            else{
                for(int j=0;j<n;j++){
                    ans+=(char)c;
                }
            }
        }
        return ans;
    }
};
