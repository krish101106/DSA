#include <iostream>
#include <string>
#include <vector>
using namespace std;

void per(string s, string p){
    int n=s.length();

    if (n==0){
        cout<<p<<endl;
        return;
    }

    for(int i=0; i<n;i++){
        string str= s.substr(0,i)+s.substr(i+1,n-i-1);
        per(str, p+s[i]);
    }
}


int main() {
    
    per("ab","");
    return 0;
}