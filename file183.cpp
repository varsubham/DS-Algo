// game of life

#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    int applyRules(vector<vector<int>> board, pair<int, int> indices){
        // check a cell
        int i = indices.first;
        int j = indices.second;
        int rows = board.size();
        int cols = board[0].size();
        
        int num_ones = 0;
        int num_zeros = 0;
        // check vertical neighbour bottom
        if(i+1 < rows){
            num_ones += board[i + 1][j] == 1 ? 1 : 0;
            num_zeros += board[i + 1][j] == 0 ? 1 : 0;
        }
        // check vertical neighbour top
        if (i - 1 >= 0){
            num_ones += board[i - 1][j] == 1 ? 1 : 0;
            num_zeros += board[i - 1][j] == 0 ? 1 : 0;
        }
        // check horizontal right
        if (j + 1 < cols){
            num_ones += board[i][j + 1] == 1 ? 1 : 0;
            num_zeros += board[i][j + 1] == 0 ? 1 : 0;
        }
        // check horizontal left
        if (j - 1 >= 0){
            num_ones += board[i][j - 1] == 1 ? 1 : 0;
            num_zeros += board[i][j - 1] == 0 ? 1 : 0;
        }
        // check top-right
        if(j + 1 < cols && i - 1 >= 0){
            num_ones += board[i - 1][j + 1] == 1 ? 1 : 0;
            num_zeros += board[i - 1][j + 1] == 0 ? 1 : 0;
        }
        // check top-left
        if(j - 1 >= 0 && i - 1 >= 0){
            num_ones += board[i - 1][j - 1] == 1 ? 1 : 0;
            num_zeros += board[i - 1][j - 1] == 0 ? 1 : 0;
        }
        // bottom left
        if(j - 1 >= 0 && i + 1 < rows){
            num_ones += board[i + 1][j - 1] == 1 ? 1 : 0;
            num_zeros += board[i + 1][j - 1] == 0 ? 1 : 0;
        }
        // bottom right
        if(i + 1 < rows && j + 1 < cols){
            num_ones += board[i + 1][j + 1] == 1 ? 1 : 0;
            num_zeros += board[i + 1][j + 1] == 0 ? 1 : 0;
        }

        //cout << num_ones << " " << num_zeros << endl;
        // return cells on basic of num_ones and num_zeros

        if(board[i][j] == 1 && num_ones < 2){
            return 0;   // under-population
        }
        if(board[i][j] == 1 && (num_ones == 2 || num_ones == 3))
            return 1;
        if(board[i][j] == 1 && num_ones > 3){
            return 0;   // over-population
        }
        if(board[i][j] == 0 && num_ones == 3)
            return 1;   // reproduction
        return 0;
    }
    void gameOfLife(vector<vector<int>> &board){
        // game of life
        vector<vector<int>> new_board(board.size(), vector<int>(board[0].size()));
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
                new_board[i][j] = applyRules(board, make_pair(i, j));
            }
        }
        board = new_board;
        //return new_board;
    }
};

int main() {
    vector<vector<int>> vt1 = {{0,1,0},{0,0,1},{1,1,1},{0,0,0}};
    Solution st;
    st.gameOfLife(vt1);

    // print vt
    for(int i = 0; i < vt1.size(); i++){
        for(int j = 0; j < vt1[i].size(); j++){
            cout << vt1[i][j] << " ";
        }
        cout << endl;
    }

}