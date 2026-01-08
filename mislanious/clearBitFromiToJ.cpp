//Write a Functiont o clear the range ofb itsf rom i to j in a given number.

#include <iostream>
#include <string>
#include <vector>
using namespace std;




int clear(int n, int i, int j){

    int t=~0; // take all a no with all the bit is 1
    


    while(i<=j){ // make that no a bit mask where no will have zeros from i to j
        t= t & (~ (1<<i));
        i++;
    }



    return (n & t); // perform and operation with given no to clear no from i to j
}



int main() {
    cout<<clear(31,1,3);
    return 0;
}