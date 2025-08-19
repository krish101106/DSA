class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        sort(a.begin(),a.end());
        
        int n=a.size();
        
        int min_diff=a[m-1]-a[0];
        
        int s=1,e=m;
        int diff;
        
        while(e<n){
            diff=a[e]-a[s];
            
            if(diff<min_diff){
                min_diff=diff;
            }
            
            s++,e++;
        }
        
        return min_diff;
        
    }
};