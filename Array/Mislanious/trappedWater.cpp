#include <iostream>
#include <string>
#include <vector>
using namespace std;

int trapped(int *arr, int n){
    int lmax=INT_MIN, rmax=INT_MIN, tw=0;
    int ll[n],rl[n], min[n];

    for(int i =0;i<n;i++){
        if(arr[i]>lmax){
            lmax=arr[i];
        }
        ll[i]=lmax;
        //cout<<ll[i]<<" ";
    }
    for(int i =n-1;i>=0;i--){
        if(arr[i]>rmax){
            rmax=arr[i];
        }
        rl[i]=rmax;
        //cout<<rrl[i]<<" ";
    }

    for(int i=0; i<n ; i++){
        if(ll[i]>rl[i]){
            min[i]=rl[i];
        }
        else{
            min[i]=ll[i];
        }

        tw+=(min[i]-arr[i]);
        //cout<<min[i]<<" ";
        
       
    }

    return tw;
}


int main() {
    int arr[]={4,2,3,5,4,3,1,4};

    cout<<trapped(arr,8);
    return 0;
}