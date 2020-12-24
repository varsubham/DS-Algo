// min path sum
// dynamic programming

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int minpathsum(vector<vector<int>> &grid){
            int h = grid.size();
            int w = grid[0].size();
            const int INF = 1e8;
            vector<vector<int>> dp(h, vector<int>(w));
            for(int i = 0; i < h; i++){
                for(int j = 0; j < w; j++){
                    if(i == 0 && j == 0)
                        dp[i][j] = grid[i][j];
                    else{
                        dp[i][j] = grid[i][j] + min((i == 0 ? INF : dp[i - 1][j]), (j == 0 ? INF : dp[i][j - 1]));
                    }
                }
            }
            return dp[h - 1][w - 1];
        }
};

int main(){
    Solution st;
    vector<vector<int>> grid = {{1,3,1}, {1,5,1}, {4,2,1}};
    cout << st.minpathsum(grid) << endl;
}