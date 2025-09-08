#include<iostream>
using namespace std;

void pre(vector<int> arr){
    //printing and creating prefix array
    int n=arr.size();
    vector<int> pre(n,0);

    pre[0]=arr[0];
    for(int i=1;i<n;i++){

        pre[i]=pre[i-1]+arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<pre[i]<<endl;
    }

}

void suf(vector <int> arr){
    int n=arr.size();

    vector<int>suf(n,0);

    suf[n-1]=arr[n-1];

    for(int i=n-2;i>-1;i--){
        suf[i]=arr[i]+suf[i+1];
    }

     for(int i=0;i<n;i++){
        cout<<suf[i]<<endl;
    }
}




int main(){

    vector<int> arr={-7,1,5,2,-4,3,0};

    pre(arr);
    cout<<endl<<"-------------------"<<endl;
    suf(arr);
    return 0;
}
