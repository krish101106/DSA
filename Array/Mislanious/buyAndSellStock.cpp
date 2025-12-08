#include <iostream>
#include <string>
#include <vector>
using namespace std;

int profit(int *a, int n){

    int dif=INT_MIN;
    int b,s;
    int arr[3];
    for(int i =0;i<n;i++){
        int d=0;
        for (int j=i;j<n;j++){
            d=a[j]-a[i];
            if(d>dif){
                dif=d;
                arr[0]=d;
                arr[1]=i;
                arr[2]=j;
            }
        }
    }
    return arr[0];
}


int opt(int *a, int n){
    int min=INT_MAX;
    int b[1000000];
    int pro=a[0]-min;

    for(int i=0;i<n;i++){
        if (a[i]<min){
            min=a[i];

        }

        if((a[i]-min)>pro)
            pro=a[i]-min;
        // b[i]=min;
        // cout<<min;
    }
    return pro;

}


int main() {
    
    int a[]={7,1,5,8,0,4};

    int arr=opt(a,6);
    

    cout<<endl<<"Max profit: "<<arr;
    // cout<<endl<<"Buying day: "<<arr[1]+1;
    // cout<<endl<<"Selling day: " <<arr[2]+1;
    return 0;
}