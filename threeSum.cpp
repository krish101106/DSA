class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int s,e;
        int sum=0;
        
        for(int i=0;i<n-2;i++){
            s=i+1;
            e=n-1;
            while(s<e){
                sum=arr[s]+arr[e]+arr[i];
                if(sum>target){
                    e--;
                }
                else if(sum<target){
                    s++;
                }
                else{
                    return true;
                }
            }
            
        }
        
        return false;
        
    }
};