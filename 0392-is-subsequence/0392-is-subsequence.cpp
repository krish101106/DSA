class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i{0}, j{0};
        int m= t.size(), n= s.size();
        string temp="";

        while(j<m){
            if(s[i]==t[j]){
                temp+=s[i];
                if(i<n){
                    i++;
                }
                j++;
                
            }else{
                j++;
            }
        }

        if(s==temp){
            return true;
        }

        return false;
    }
};