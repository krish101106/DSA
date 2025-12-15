#include <iostream>
#include <string>
#include <vector>
using namespace std;

//might be error, check it again.


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



bool oneSwap(string s1, string s2){

    if (!anagram(s1,s2)){
        return false;
    }

   

    else{
         int n=s1.length();
         int count =0;

         for(int i=0;i<n;i++){
                if(s1[i]!=s2[i]){
                count++;
            }
        }

        if (count>2){
            return false;
        }
        return true;
    }


    return false;
}


int main() {
    
    return 0;
}

