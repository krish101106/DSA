#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Error Error Error Error Error Error Error Error Error Error Error Error 
 

void rotate(int a[][3],int n,int m){

    // in-place transpose
    for(int i=0;i<n;i++){
        for (int j=i+1;j<m;j++){
            swap(a[i][j],a[j][i]);
        }
    }

    for(int i=0;i<n;i++){
       for (int j=0;j<m/2;j++){
            swap(a[i][j],a[i][m-1-j]);
        }
    }
}


int main() {
    int a[][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};


    rotate(a,3,3);            
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}