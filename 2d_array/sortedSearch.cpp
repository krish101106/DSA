#include <iostream>
#include <string>
#include <vector>
using namespace std;

void stairCase(int a[][4], int n, int m, int t){
    int i = 0, j = m - 1;

    while(j >= 0 && i < n){
        int cur = a[i][j];

        if(cur == t){
            cout << i << " " << j;
            return;
        }
        else if(cur > t){
            j--;
        }
        else{
            i++;
        }
    }

    cout << "Not found";
}

void stairCase2(int a[][4], int n, int m, int t){
    int i=n-1, j=0;

    while(i>=0 && j<m){
        int cur = a[i][j];

        if(cur == t){
            cout<< i<< " "<< j;
            return;
        }

        else if(cur>t){
            i--;
        }
        else{
            j++;
        }
    }
}

void BS(int a[][4],int n,int m,int t){

    int i=0;
    while(i<n){
        int s= 0;
        int e=m-1;
       while(s<=e){
            int mid=(s+e)/2;
            int cur=a[i][mid];

            if (cur==t){
                cout<<i<<" "<<mid;
                return;
            }
            else if(cur>t){
                e--;
            }
            else{
                s++;
            }
       }
       i++;
    }
}

int main() {
    int a[][4]={{1,2,3,4},
                {7,8,12,16},
                {9,11,15,19},
                {10,13,18,21}};

    BS(a,4,4,11);
    return 0;
}