#include <iostream>
#include <string>
#include <vector>
using namespace std;

int ways(int n){
    // base

    if (n<=1){
        return 1;
    }

    else{
        return (ways(n-1)+ways(n-2));
    }
}


int main() {
    
    cout<<ways(2);

    return 0;
}