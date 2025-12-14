#include <iostream>
#include <string>
#include <vector>
using namespace std;

int diagonal(int a[][4], int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=a[i][i];

        if(i!=n-1-i){
            sum+=a[i][n-1-i];
        }
    }
    return sum;
}


int main() {
    int a[4][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};

   cout<<diagonal(a,4);             
    return 0;
}