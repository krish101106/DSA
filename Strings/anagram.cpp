#include <iostream>
#include <string>
#include <vector>
using namespace std;

//considering every alphabet is small

bool anagram(string s1, string s2){
    if (s1.length() != s2.length()){
         return false;
    }

    int a[26]={0};

    for(char c: s1){
        a[c-'a']++;
    }

    for (char c: s2){
        a[c-'a']--;
    }

    for(int i=0;i<26;i++){
        if (a[i]!=0){
            return false;
        }
    }

    return true;

}


int main() {
    
    return 0;
}