#include <iostream>
#include <string>
#include <vector>
using namespace std;


void insertion(int *a, int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;

    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int a[]={4,5,1,3,2};
    insertion(a,5);
    return 0;
}