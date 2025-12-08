#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pivot(int *a, int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return i+1;
        }
    }
    return 0;
}

int binarySearch(int *a, int st, int ed, int t){
    int s=st,e=ed;
    int mid;
    while(e>=s){
        mid=(s+e)/2;
        if(t==a[mid]){
            return mid;
        }
        else if(t>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}


int search(int *a, int n, int t){
    int p = pivot(a, n);

    
    if(p == 0) {
        return binarySearch(a, 0, n-1, t);
    }

    

    if(t >= a[0] && t <= a[p-1]) {
        return binarySearch(a, 0, p-1, t);
    } else {
        return binarySearch(a, p, n-1, t);
    }
}



int main() {
    int a[]={4,5,6,7,0,1,2};

    
    cout<<search(a,7,5);

    return 0;
}