#include<iostream>
#include<vector>
using namespace std;

vector<int> preToOriginal(vector<int> pre){
    int n=pre.size();
    vector<int> arr(n);
    arr[0]=pre[0];

    for(int i=1;i<n;i++){
        arr[i]=pre[i]-pre[i-1];
    }

    return arr;
}

int main(){
    vector<int> pre={1,3,6,10,15,21,28,36};

    vector<int> arr=preToOriginal(pre);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}