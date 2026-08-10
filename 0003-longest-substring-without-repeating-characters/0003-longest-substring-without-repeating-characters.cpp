class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int e{0}, left{0}, count{0}, maxCount{0};
        unordered_set<int> st;


        while(e<n){
            if(st.insert(s[e]).second){
                e++;
                count = e - left; 
                
                maxCount=max(count,maxCount);
            }else{
                count=0;
                st.erase(s[left]);
                left++;
                count = e - left; 
            }
        }
        return maxCount;
    }
};