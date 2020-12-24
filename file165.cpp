// Grid 1 Atcoder

#include <iostream>
#include <vector>

using namespace std;;


int main(){
    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid(r, vector<char>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> grid[i][j];
        }
    }
    int modul = 1000000000 + 7;
    // create the dp
    vector<vector<int>> dp(r, vector<int>(c, 0));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(grid[i][j] == '#'){
                dp[i][j] = 0;
            }
            else if(i == 0 && j == 0){
                dp[i][j] = 1;
            }
            else if(i == 0 && grid[i][j] != '#'){
                dp[i][j] = dp[i][j - 1] % modul;
            }
            else if(j == 0 && grid[i][j] != '#'){
                dp[i][j] = dp[i - 1][j] % modul;
            }
            else if(grid[i - 1][j] == '#' && grid[i][j - 1] == '#'){
                dp[i][j] = 0;
            }
            else{
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % modul;
            }
            
        }
    }
    cout << dp[r - 1][c - 1] << endl;
}