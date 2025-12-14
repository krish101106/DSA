#include <iostream>
#include <string>
#include <vector>
using namespace std;




int main() {
    
    int a[][4]={{1,2,3,4},
                {7,8,12,16},
                {9,11,15,19},
                {10,13,18,21}};


    cout<<*a<<endl;          // pointer of first element of first row  
    cout<<*(a+1)<<endl;          // pointer of first element of second row  
    cout<<*(a+2)<<endl;          // pointer of first element of third row  
    cout<<**a<<endl;          // first element of first row  
    cout<<**(a+1)<<endl;          // first element of second row  
    cout<<(**a)+1<<endl;          // second element of first row  
    cout<<**(a+1)+1;          // second element of second row  
    return 0;
}