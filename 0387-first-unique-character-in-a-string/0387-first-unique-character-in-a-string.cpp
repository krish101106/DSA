class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26]={0};
        int n=s.size();

        for(char c: s){
            arr[c-'a']++;
        }

        for(int i=0; i<n; i++){
            if(arr[s[i]-'a']<2){
                return i;
            }
        }

        return -1;
    }
};