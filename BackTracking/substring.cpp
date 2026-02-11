#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sub(string s,string substring){
    int n=s.length();

    if(s.length()==0){
        cout<<substring<<endl;
        return;
    }

    sub(s.substr(1,n), substring+s[0]);

    sub(s.substr(1,n-1), substring);

}



int main() {
    sub("kr","");
    return 0;
}