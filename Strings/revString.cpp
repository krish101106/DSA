#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rev(char* c){
    int i=0,n=strlen(c);
    
    while(i<(n/2)){
        swap(c[i],c[n-1-i]);
        i++;
    }
}

int main() {
    char c[]="krish";
    rev(c);

    cout<<c[0];
    return 0;
}