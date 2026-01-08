#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int n){
    if (n==1){ //base case
        return 1;
    }

    else{
        return n* fact(n-1);
    }
}


int main() {
    cout<<fact(10);
    return 0;
}