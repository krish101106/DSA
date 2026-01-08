#include <iostream>
#include <string>
#include <vector>
using namespace std;

void dec(int n){// printing no. from n to 0
    if(n<0){//base case
        return;
    }

    else{
         cout<<n<<endl;
        dec(n-1);
    }
    
}


int nSum(int n){
    if (n==0){//base case
        return 0;
    }

    else{
        //return n+nSum(n-1);

        int sum= n+nSum(n-1);
        return sum;
    }
}

int main() {
    //dec(100);

    //cout<<endl<<endl;

    cout<<nSum(5);
    return 0;
}