#include <iostream>
#include <string>
#include <vector>
using namespace std;

int binary(int* a, int n, int t){

    int s=0,e=n-1;
    int mid;
    while(e>=s){
        mid=(e+s)/2;

        if(a[mid]==t)
            return mid;
        
        else if(a[mid]<t)
            s=mid+1;

        else
            e=mid-1;
    }

    return -1;
}



int main() {
    int a[]={1,2,3,4,5,6,7,8,9};

    cout<<"Index:  "<<binary(a,9,8);

    return 0;
}