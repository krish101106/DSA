#include <iostream>
#include <string>
#include <vector>
using namespace std;



bool palin(char *c){
   
    int i=0,n=strlen(c);

    
    while(i<n/2){
        if(c[i]!=c[n-1-i]){
            return false;
        }
        i++;
    }

    return true;
}

int main() {
    
    char c[]="krrk";

    cout<<palin(c);

    return 0;
}