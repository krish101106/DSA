#include <iostream>
#include <string>
#include <vector>
using namespace std;

void count(int *a,int n){
    int fr[1000000]={0};
    int minv=INT_MAX, maxv=INT_MIN;
    //find min and max;

    for(int i=0;i<n;i++){
        minv=min(minv,a[i]);
        maxv=max(maxv,a[i]);
    }

    for(int i=0;i<n;i++){
        fr[a[i]]++;
    }

    int j=0;

    for(int i=minv;i<=maxv;i++){
        while(fr[i]>0){
            a[j]=i;
            j++;
            fr[i]--;
        }
    }

    //printing array

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main() {
    int a[]={5,3,1,2,4,5,1,3};
    count(a,8);
    return 0;
}