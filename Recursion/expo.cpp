#include <iostream>
#include <string>
#include <vector>
using namespace std;

int expo(int x,int n){// with time complexity of n
    if(n==0){
        return 1;
    }

    return x*expo(x,n-1);
}


int expo2(int x, int n){// with time coplexity of logN
    if (n==0){
        return 1;
    }

    if(n&1){
        return x* expo2(x*x,n>>1);
    } else {
        return expo2(x * x, n >> 1);
    }
}

int main() {
    cout<< expo(3,5);
    return 0;
}