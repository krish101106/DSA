#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;

int remove(vector<int>& arr,int t){
    int l=0,n=arr.size(),r=n-1;

    while(l<r){
        if(arr[l]==t)
            swap(arr[l],arr[r--]);
        else
            l++;

    }
    return r;
}

void display(vector<int>& arr){

    int n=arr.size();
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;
    }

}

int main(){
    vector<int> arr={0,1,3,0,2,2,4,2};
    cout<<remove(arr,2)<<endl<<endl<<endl;
    display(arr);
    

    return 0;
}