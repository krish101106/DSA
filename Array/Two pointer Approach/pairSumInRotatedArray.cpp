#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;



bool sum(vector <int>& arr,int t){
    //1. find the pivot element
    int i=0,n=arr.size();

    while(arr[i+1]>arr[i] && i+1<n){
        i++;
    }

    int e=i,s=i+1;

    //finding the pair

    while(e!=s){

        int sum=arr[e]+arr[s];
        if(sum==t){
            return true;
        }

        else if(sum>t){
            e=(e-1+n)%n;//e=0, so (0-1+n)%n= n-1
        }
        else{
            s=(s+1)%n;
        }

    }

    return false;
    
}

