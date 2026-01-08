#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool check(int *a,int n){
    //base
    if(n==0){
        return 1;
    }

    else{
        if (a[n]>a[n-1]  && check (a,n-1)){
            return 1;
        }
        else{
            return 0;
        }
    }
}


int main() {
    int a[]={1,2,31,4,5};

    cout<<check(a,4); 
    return 0;
}