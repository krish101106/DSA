//Finding the pivot in rotated Array

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


int main() {
    int a[]={4,5,6,7,8,9,12};
    cout<<pivot(a,7);
    return 0;
}