/*Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int s=0,e=k-1;
        int sum=0;
        int cSum=0;
        int i=0;
        int n=arr.size();
        
        while(i<k){
            cSum=cSum+arr[i++];
        }
        sum=cSum;
        
        
        while(e<n-1){
            s++,e++;
            cSum=cSum+arr[e]-arr[s-1];
            if(sum<cSum){
                sum=cSum;
            }
        }
        return sum;
    }
};