#include <iostream>
#include <string>
#include <vector>
using namespace std;

void bubble(int *a,int n){
    for(int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}


int main() {
    int a[]={5,4,1,3,2};

    bubble(a,5);
    return 0;
}