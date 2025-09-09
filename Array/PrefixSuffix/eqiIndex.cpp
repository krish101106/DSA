#include<iostream>
using namespace std;



vector<int> preArr(vector<int>& arr){
    int n=arr.size();
    
    vector<int> pre(n,0);
    
    pre[0]=arr[0];

    for(int i=1;i<n;i++){
        pre[i]=arr[i]+pre[i-1];
    }

    return pre;
}

vector<int> sufArr(vector<int>& arr){
    int n=arr.size();
    vector<int> suf(n,0);
    
    suf[n-1]=arr[n-1];

    for(int i=n-2;i>-1;i--){
        suf[i]=suf[i+1]+arr[i];
    }

    return suf;
}


int main(){
    int flag=-1;
    
    vector<int> arr={-7,1,5,2,-4,3,0};
    int n=arr.size();

    vector<int> pre=preArr(arr);
    vector<int> suf=sufArr(arr);


    for(int i=0;i<n;i++){

        if(pre[i]==suf[i]){
            flag=i;
            cout<<flag;
            return flag;
        }
    }

    cout<<flag;
    return flag;
}