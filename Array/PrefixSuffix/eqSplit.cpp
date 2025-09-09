/*Given an array of integers arr, return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. If it is not possible then return false.*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    
    
    vector<int> preArr(vector<int>& arr){
    int n=arr.size();
    
    vector<int> pre(n,0);
    
    pre[0]=arr[0];

    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }

    return pre;
}
  
  
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        
        vector <int> pre=preArr(arr);
        
        int t=pre[n-1];
        
         if(t%2!=0){
             return false;
         }
        
        for(int i=0;i<n-1;i++){
            if(pre[i]==(t/2)){
                return true;
            }
        }
        
        return false;
    }
};
