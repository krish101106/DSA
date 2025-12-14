#include <iostream>
#include <string>
#include <vector>
using namespace std;



void spiral(int a[][4], int n, int m){
    int s_row=0,e_row=n-1;
    int s_col=0,e_col=m-1;
    while(s_row<=e_row && s_col<=e_col){


        for(int i=s_col;i<=e_col;i++){ //top side
            cout<<a[s_row][i]<<"  ";
        }

        for(int i=s_row+1;i<=e_row;i++){ //right side
            cout<<a[i][e_col]<<"  ";
        }

        for(int i=e_col-1;i>=s_col;i--){ //bottom side
            if(s_row==e_row)
                break;

            cout<<a[e_row][i]<<"  ";
        }

        for(int i=e_row-1;i>=s_row+1;i--){ //left side
             if(s_col==e_col)
                break;

            cout<<a[i][s_col]<<"  ";
        }
        s_row++,e_row--;
        s_col++,e_col--;
        
    }

}


int main() {

    int a[4][4]={{1,2,3,4},
                 {5,6,7,8},
                 {9,10,11,12},
                 {13,14,15,16}
            };

   int b[][4] ={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
            };           
    
    spiral(a,4,4);
    cout<<endl<<endl;
    spiral(b,3,4);
    
    return 0;
}