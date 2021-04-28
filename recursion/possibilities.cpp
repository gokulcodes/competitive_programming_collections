#include <bits/stdc++.h>

using namespace std;

bool isSafe(int i,int j,int n){
    return i >= 0 and i < n and j >= 0 and j < n;
}

int result = 0;
void ratMaze(vector<vector<int>> &arr, int i, int j, int n, vector<vector<int>> &visited){
    if(arr[n-1][n-1] == 1) return;
    if(i == n-1 and j == n-1){
        result++;
        return;
    }
    visited[i][j] = 1;

    if(not isSafe(i, j, n)){
        return;
    }

    if(isSafe(i-1, j, n) and arr[i-1][j] == 0 and visited[i-1][j] == 0){
        // up
        ratMaze(arr, i-1, j, n, visited);
    }
    if(isSafe(i+1, j, n) and arr[i+1][j] == 0 and visited[i+1][j] == 0){
        // down
        ratMaze(arr, i+1, j, n, visited);
    }
    if(isSafe(i, j-1, n) and arr[i][j-1] == 0 and visited[i][j-1] == 0){
        // left
        ratMaze(arr, i, j-1, n, visited);
    }
    if(isSafe(i, j+1, n) and arr[i][j+1] == 0 and visited[i][j+1] == 0){
        // right
        ratMaze(arr, i, j+1, n, visited);
    }
    visited[i][j] = 0;

}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    vector<vector<int>> visited(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    ratMaze(arr, 0, 0, n, visited);
    cout << result << endl;
    return 0;
}