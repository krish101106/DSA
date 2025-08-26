/*Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.*/
#include<iostream>
#include<string>
using namespace std;

class Solution {
  public:
    int smallestSubstring(string S) {
        int z=-1,o=-1,t=-1;
        int n=S.length(),i=0;
        
        int dif=INT_MAX,c_dif=INT_MAX,mx,mn;
        
        while(i<n){
            
            if(S[i]=='0'){
                z=i;
            }
            else if(S[i]=='1'){
                o=i;
            }
            else{
                t=i;
            }
            i++;
            
            if(z!=-1 && t!=-1 && o!=-1){
                mx=max({z,o,t});
                mn=min({z,o,t});
                c_dif=mx-mn+1;
                
                dif=min(c_dif,dif);
            }
        
        }
        
       
        
        if(dif==INT_MAX){
            return -1;
        }
        
        return dif;
        
    }
};
