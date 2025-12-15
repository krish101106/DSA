#include <iostream>
#include <string>
#include <vector>
using namespace std;


void caps(char *c){
    int i=0,n=strlen(c);
    
    while(i<n){
        
        if(c[i]>='a' && c[i]<='z'){
            c[i]=c[i]-'a'+'A';
        }
        i++;
    }
}

void lower(char *c){
    int i=0,n=strlen(c);
    
    while(i<n){
        
        if(c[i]>='A' && c[i]<='Z'){
            c[i]=c[i]-'A'+'a';
        }
        i++;
    }
}

int main() {
    char c[100];

    cin.getline(c,50);
    
    lower(c);
    cout<<c;
    return 0;
}