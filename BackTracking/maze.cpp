#include <iostream>
#include <string>
#include <vector>
using namespace std;



void print(vector<vector<int>> b, int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}

void ratInMaze(vector<vector<int>>m,vector<vector<int>>visited, int r, int c){
    int n = m.size();


    if(r+1 ==n && c+1==n){
        print(visited, n);
        return;
    }
    
    visited[r][c]=1;
    if(visited[r][c-1]!=1 && c>=0 && m[r][c-1]!=0){// going left
        ratInMaze(m,visited,r,c-1);
    } 
    if(visited[r][c+1]!=1 && c<n && m[r][c+1]!=0){// going right
        ratInMaze(m,visited,r,c+1);
    } 
    if(visited[r+1][c]!=1 && r<n && m[r+1][c]!=0){// going down
        ratInMaze(m,visited,r+1,c);
    } 
    if(visited[r-1][c]!=1 && r>=0 && m[r-1][c]!=0){// going up
        ratInMaze(m,visited,r-1,c);
    } 


}


int main() {

    vector<vector<int>> visited;
    int n=4;

    for (int i=0; i<n;i++){
        
    }
    
    return 0;
}