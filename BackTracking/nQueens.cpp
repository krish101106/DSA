#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(vector<vector<char>> b, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}

bool isSafe(vector<vector<char>> &b, int r, int j) {

    // vertical up
    for (int i = r; i >= 0; i--) {
        if (b[i][j] == 'q') return false;
    }

    // diagonal left-up
    for (int i = r, k = j; i >= 0 && k >= 0; i--, k--) {
        if (b[i][k] == 'q') return false;
    }

    // diagonal right-up
    for (int i = r, k = j; i >= 0 && k < b.size(); i--, k++) {
        if (b[i][k] == 'q') return false;
    }

    return true;
}

void nQueens(vector<vector<char>> b,int r){

    int n =b.size();
    if(r==n){
        print(b,n);
        return;
    }

    for(int i=0;i<n;i++){

        if(isSafe(b, r, i)){
            b[r][i]='q'; 
            nQueens(b,r+1);
            b[r][i]='.'; 
        }


        cout<<"----------------"<<endl;
    }

}


int main() {
    vector<vector<char>> b;

    int n=5;

    for(int i=0;i<n;i++){
        vector<char> newRow;
        for(int j=0;j<n;j++){
            newRow.push_back('.');
        }
        b.push_back(newRow);
    }

    nQueens(b,0);

    return 0;
}