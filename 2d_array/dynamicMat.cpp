#include <iostream>
#include <string>
#include <vector>
using namespace std;

void dynamic(){
    int rows,cols;
    cout<<"enter rows and cols";
    cin>>rows>>cols;

    int **mat=new int*[rows];

    for(int i =0;i<rows;i++){
        mat[i]=new int[cols];
    }

    for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }

     for(int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout<<mat[i][j]<< " ";
        }
        cout<<endl;
    }

    for (int i=0;i<rows;i++){
        delete mat[i];
    }

    delete[] mat;

}

int main() {
    dynamic();
    return 0;
}