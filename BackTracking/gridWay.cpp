#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gridWay(int rows, int cols, int n){
    int count=0;

    if(rows==n || cols==n){
        return 1;
    }

    count+=gridWay(rows+1,cols,n);
    count+=gridWay(rows,cols+1,n);

    return count;
}



int main() {
    cout<<gridWay(0,0,3);
    return 0;
}