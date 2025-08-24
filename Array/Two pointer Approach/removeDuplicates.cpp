#include<iostream>
#include<vector>
using namespace std;

int remove(vector<int>&arr){
    int n=arr.size();
    int s=1,i=1;

    while(i<n){
        if(arr[i]==arr[i-1]){
            //last and current are same
            i++;
        }
        else{
            //last and curremt unique
            arr[s]=arr[i];
            s++;
            i++;
        }
    }
    return s;
}

void display(vector<int>& arr){

    int n=arr.size();
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;
    }

}

int main(){
    vector<int> arr={1,2,2,3,4,4,4,4,4,5,5,5,5,6,7,8,9,9,9,9};

    cout<<remove(arr)<<endl<<endl<<endl;
    display(arr);
    

    return 0;
}