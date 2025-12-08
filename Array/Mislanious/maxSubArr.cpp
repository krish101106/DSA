#include <iostream>
#include <string>
#include <vector>
using namespace std;

int brut(int* a, int n){

    int sum=INT_MIN;


    for (int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            int t=0;
            for(int i=s;i<=e;i++){
                
                t+=a[i];
                if(t>sum){
                    sum=t;
                }
            }
        }

    }

    return sum;
}


int opt(int* a, int n){

    int sum=INT_MIN;


    for (int s=0;s<n;s++){
        int curSum=0;
        for(int e=s;e<n;e++){
           curSum+=a[e];
           if(curSum>sum){
                sum=curSum;
           }
        }

    }

    return sum;
}

int kadan(int *a, int n){
    int currSum=0, sum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        sum=max(sum,currSum);

        if(currSum<0){
            currSum=0;
        }
    }

    return sum;
}


int main() {
    int a[]={1,2,3,4,-3};

    cout<<endl<<endl<<kadan(a,5);
    return 0;
}