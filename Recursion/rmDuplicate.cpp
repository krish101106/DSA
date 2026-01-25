#include <iostream>
#include <string>
#include <vector>
using namespace std;

void rm(string s, int i, string ans, bool *m){

    if (i==s.size()){
        cout<<ans;
        return;
    }

    if(m[s[i]-'a']){
        rm(s, i+1, ans, m);
        
    }
    else{
        
        m[s[i]-'a']=true;
        rm(s, i+1, ans+s[i], m);
    }


}


int main() {
    bool m[26]={false};

    string s="kkkrrriiiisssshhhh";
    string ans="";

    rm(s,0, ans,m);

    return 0;
}