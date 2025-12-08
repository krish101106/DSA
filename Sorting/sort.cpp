#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {
    int n=14;
    int a[14]={3,4,1,1,3,2,5,4,7,8,4,9,10,6};

    sort(a,a+14);//sorting the array


    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    //cout<<endl<<endl<<endl;
   // cout<<endl<<endl<<endl;
    
    sort(a+5,a+10);
    
    
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl<<endl<<endl;
    
    sort(a,a+14,greater<int>());
    
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }


    return 0;
}