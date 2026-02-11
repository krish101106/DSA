#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fpair(int n){


    if(n==2 || n==1){
        if(n==2)
            return 2;
        else
            return 1;    
    }

    

    return (fpair(n-1)+(n-1)*fpair(n-2));

}


int main() {
    cout<<fpair(4);
    return 0;
}