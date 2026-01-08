#include <iostream>
#include <string>
#include <vector>
using namespace std;

int expo(int n, int x) {
    int e = 1;
    int m = n;

    while (x > 0) {
        if (x & 1) {
            e *= m;
        }
        m *= m;
        x >>= 1;
    }

    return e;
}


int main() {
    cout<<expo(3,5);
    return 0;
}