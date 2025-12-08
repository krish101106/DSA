#include <iostream>
#include <string>
#include <vector>
using namespace std;

void selection(int *a, int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if (a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}


int main() {
    
int a[]={5,4,1,3,2};

selection(a,5);

    return 0;
}