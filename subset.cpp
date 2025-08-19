class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        int s=0,e=0;
        int n=a.size();
        int m=b.size();
        
        while(s<n && e<m){
            if(a[s]==b[e]){
                s++,e++;
            }
            
            else if(a[s]>b[e]){
                return false;
            }
            
            else{
                s++;
            }
        }
        
        if(e==m){
            // for cases like a= 2 3 5 10 19; b= 3 5 19 27;
            return true;
        }
        
        return false;
    }
};