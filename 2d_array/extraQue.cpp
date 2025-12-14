#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main() {

    int a[][4]={{1,2,3,4},
                {7,8,12,16},
                {9,11,15,19},
                {10,13,18,21}};

    int b[4][2]={{1,2},
                {3,4},
                {5,6},
                {7,8}};

    //printing sum of the second row;
    {
        int n=4,m=4,sum=0;
        for(int j=0;j<m;j++){
            sum+=a[1][j];
        }
        cout<<sum;
    }                
    
    cout<<endl<<endl<<endl;

    //finding the transpose
    {
        int n=4,m=2;
        int t[m][n];

        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                t[j][i]=b[i][j];
            }
        }

        //printing t
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<t[i][j];
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}