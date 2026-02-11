//solving a sudoku

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int s[][9]){
    for(int i=0;i<9;i++){
        for(int j =0; j<9;j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int s[][9], int r, int c, int digit){
    //horizontral
    for (int i=0; i<9; i++){
        if(digit==s[r][i]){
            return false;
        }
    }

    // vertical 
    for (int i=0; i<9; i++){
        if(digit==s[i][c]){
            return false;
        }
    } 

    // in that block
    int ir=(r/3)*3; // finding that block's pointer
    // here the logic is, for no. r, we need to find the pointer of that block which is  
    int ic=(c/3)*3;

    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            if(digit==s[i+ir][j+ic]){
                return false;
            }
        }
    }


    return true;
}

bool sudoku(int s[][9], int row, int col){

    int nextRow=row;
    int nextCol=col+1;

    if(row==9){
        print(s);
        return true; /// it means we have succfully. palce all the digits in all the cells
    }

    if(col+1==9){
        nextRow=row+1;
        nextCol=0;
    }

    if(s[row][col]!=0){// if digit is ald placed.
        return sudoku(s, nextRow, nextCol);
    }

    for (int digit=1; digit<=9;digit++){
        if(isSafe(s, row, col, digit )){// placing that digit after checking that palcing is safe or not,
            s[row][col]=digit;;
            if(sudoku(s, nextRow, nextCol)){ // checking for this soln's next cell, if it returns tue thn and only thn this soln is ture, else false.
                return true;
            }

            s[row][col]=0; // for next sol.
        }
    }
    

    return false;
}


int main() {
    int s[9][9]={{5,3,0,0,0,8,0,0,0},
                {0,0,9,0,0,0,0,8,1},
                {0,0,0,0,0,0,4,0,0},
                {0,0,2,0,0,0,0,0,5},
                {0,0,0,0,4,0,6,0,3},
                {3,7,4,0,5,0,2,0,0},
                {0,9,0,2,0,3,0,0,7},
                {2,1,0,0,0,0,0,0,6},
                {0,0,0,6,1,9,0,2,0}};
    cout<<sudoku(s,0,0);


    return 0;
}