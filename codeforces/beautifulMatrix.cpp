#include <bits/stdc++.h>

using namespace std;

int main(){
    int row = 5, column = 5;
    int matrix[row+1][column+1];

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            int el;
            cin >> el;
            matrix[i][j] = el;
        }
    }

    int pos_row, pos_col = 0;

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(matrix[i][j] == 1){
                pos_row = i;
                pos_col = j;
            }
        }
    }

    pos_row = abs(pos_row - 3);
    pos_col = abs(pos_col - 3);

    int min_moves = pos_row + pos_col;

    cout << min_moves << '\n';

    return 0;
}