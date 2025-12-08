#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sub(int *a, int n){ // brute force approch 
   // int s,e;

    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            for(int k=s;k<=e;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

    }

}



int main() {
    
    int a[]={1,2,3,4,5};

    sub(a,5);


    return 0;
}