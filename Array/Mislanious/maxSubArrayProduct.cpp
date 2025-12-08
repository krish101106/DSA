#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pro(int *a, int n){
    int maxSoFar=a[0];
    int minSoFar=a[0];
    int result=a[0];

    for (int i=1;i<n;i++){
        int curr=a[i];

        if(curr<0){
            swap(minSoFar,maxSoFar);
        }

        maxSoFar=max(curr,maxSoFar*curr);
        minSoFar=min(curr,minSoFar*curr);

        result=max(result,maxSoFar);
    }

    return result;
}


int main() {
    
    int a[]={2, -5, -2, 4, 0, -3, -2, -1, 6};

    cout<<pro(a,9);
    return 0;
}