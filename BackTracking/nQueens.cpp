#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n;

void ratInMaze(vector<vector<int>>& m,
               vector<vector<int>>& visited,
               int r, int c) {

    // base case: reached destination
    if (r == n - 1 && c == n - 1) {
        visited[r][c] = 1;
        
        // print current path
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << visited[i][j] << " ";
            }
            cout << endl;
        }
        cout << "-----" << endl;

        visited[r][c] = 0; // backtrack
        return;
    }

    // mark current cell
    visited[r][c] = 1;

    // LEFT
    if (c - 1 >= 0 && m[r][c - 1] == 1 && visited[r][c - 1] == 0) {
        ratInMaze(m, visited, r, c - 1);
    }

    // RIGHT
    if (c + 1 < n && m[r][c + 1] == 1 && visited[r][c + 1] == 0) {
        ratInMaze(m, visited, r, c + 1);
    }

    // DOWN
    if (r + 1 < n && m[r + 1][c] == 1 && visited[r + 1][c] == 0) {
        ratInMaze(m, visited, r + 1, c);
    }

    // UP
    if (r - 1 >= 0 && m[r - 1][c] == 1 && visited[r - 1][c] == 0) {
        ratInMaze(m, visited, r - 1, c);
    }

    // unmark (BACKTRACK)
    visited[r][c] = 0;
}

int main() {
    vector<vector<int>> maze = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 1, 1}
    };

    n = maze.size();

    vector<vector<int>> visited(n, vector<int>(n, 0));

    if (maze[0][0] == 1) {
        ratInMaze(maze, visited, 0, 0);
    }

    return 0;
}
