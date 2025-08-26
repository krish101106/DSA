#include<iostream>
#include<string>
using namespace std;


int main(){
    string s={'a','b','c','d','e','f','g'};
    for(int i=0;i<7;i++){
        int a=s[i]-'a';
        cout<<a<<endl;
    }
    return 0;
}