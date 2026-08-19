class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a1(26, 0);
        vector<int> a2(26, 0);
        int i{0}, n=s.size(), m=t.size();

        while(i<n){
            a1[s[i]-'a']++;
            i++;
        }
        i=0;
        while(i<m){
            a2[t[i]-'a']++;
            i++;
        }

        for(int i =0 ; i<26; i++){
            if(a1[i]!=a2[i]){
                return false;
            }
        }

        return true;
    }
};