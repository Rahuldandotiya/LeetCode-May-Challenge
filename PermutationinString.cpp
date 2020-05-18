class Solution {
public:
    bool check(int arr1[], int arr2[]) 
    { 
        for (int i=0; i<26; i++) 
            if (arr1[i] != arr2[i]) 
                return false; 
        return true; 
    } 
    bool checkInclusion(string s1, string s2) {
        int M = s1.size(), N = s2.size(); 
        if(M>N) return false;
        int count1[26] = {0};
        int count2[26] = {0}; 
        for(int i=0;i<M;i++) count1[s1[i]-'a']++;  
        for(int i=0;i<M;i++) count2[s2[i]-'a']++;
        for (int i = M; i < N; i++) 
        { 
            if (check(count1, count2)) return true; 
            count2[s2[i]-'a']++; 
            count2[s2[i-M]-'a']--; 
        } 
        if (check(count1, count2)) return true;
        return false;
    }
};
