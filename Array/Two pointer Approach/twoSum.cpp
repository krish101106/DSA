#include<iostream>
#include<vector>

using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        
        sort(arr.begin(),arr.end());
        
        int s=0,e=arr.size()-1;
        int count=0;
        int sum=0;
        
        while(s<=e){
            sum=arr[s]+arr[e];
            if(sum==target){
                int ele1=arr[s], ele2=arr[e];
                int c1=0,c2=0;
                
                //count the frequency of arr[s]
                while(s<=e && arr[s]==ele1){
                    s++;
                    c1++;
                }
                
                //count the frequency of arr[e]
                while(s<=e && arr[e]==ele2){
                    e--;
                    c2++;
                }
                
                
                //if the ele1 and ele2 are the same then the no of ways to chose the ele is nC2
                if(ele1==ele2){
                    count+=(c1*(c1-1))/2;
                }
                //if both are different then the ans is c1*c2
                else{
                    count+=c1*c2;
                }
            }
            
            else if(sum<target){
                s++;
            }
            else{
                e--;
            }
        }
        
        return count;
        
    }
};