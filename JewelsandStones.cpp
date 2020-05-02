class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char> s;
        int count=0;
        for(auto i:J) s.insert(i);
        for(int i=0;i<S.length();i++){
            if(s.find(S[i])!=s.end()) count++;
        }
        return count;
    }
};
