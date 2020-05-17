class Solution {
public:
    bool check(int h1[],int h2[]){
	for(int i=0;i<26;i++){
		if(h1[i]!=h2[i]) return false;
	}
	return true;
}
vector<int> findAnagrams(string s,string p){
	int h1[26]={0};
	int h2[26]={0};
	vector<int> ans;
	if(s.size()<p.size()) return ans;
	if(s.size()<1) return ans;
	for(int i=0;i<p.size();i++){
		h1[s[i]-'a']++;
		h2[p[i]-'a']++;
	}
	if(check(h1,h2)) ans.push_back(0);
	for(int i=p.size();i<s.size();i++){
		h1[s[i-p.size()]-'a']--;
		h1[s[i]-'a']++;
		if(check(h1,h2)) ans.push_back(i-p.size()+1);
	}
	return ans;
}
};
