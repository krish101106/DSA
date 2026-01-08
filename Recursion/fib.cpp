#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fib(int n){
    //base
    if(n<=1){
        return 1;
    }

    else{
        return (fib(n-1)+fib(n-2));
        
    }
}


int main() {
    cout<<fib(8);
    return 0;
}