// cherry pickup problem
// dynamic approach
// not completed yet


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    vector<vector<pair<int, pair<int, int>>>> downtraversal(vector<vector<int>>& grid) {
        // vector<vector<int>> downDP(grid.size(), vector<int>(grid[0].size()));
        // vector<vector<char>> pathDP(grid.size(), vector<char>(grid[0].size()));

        vector<vector<pair<int, pair<int, int>>>> downDP(grid.size(), vector<pair<int, pair<int, int>>>(grid[0].size()));

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {

                if (i == 0 && j == 0)
                    downDP[i][j] = make_pair(grid[i][j], make_pair(0, 0));
                //downDP[i][j] = grid[i][j];
                else if (grid[i][j] == -1) {
                    downDP[i][j] = make_pair(-1, make_pair(-1, -1));
                    //downDP[i][j] = -1;
                }
                else {
                    int gridval = grid[i][j];
                    int max_val = max((i == 0 ? 0 : downDP[i - 1][j].first), (j == 0 ? 0 : downDP[i][j - 1].first));
                    
                    pair<int, int> prevcord;
                    
                    

                    if (i == 0) {
                        //if(downDP[i][j - 1].first == -1)
                            
                        prevcord = make_pair(i, j - 1);
                    }
                    else if (j == 0) {
                        prevcord = make_pair(i - 1, j);
                    }
                    else {
                        prevcord = max_val == downDP[i - 1][j].first ? make_pair(i - 1, j) : make_pair(i, j - 1);
                    }
                    //cout << prevcord.first << " " << prevcord.second << endl; 
                    // if(prevcord.first == -1 && prevcord.second == -1) {
                    //     downDP[i][j] = make_pair(-1, prevcord);
                    // }
                    
                    downDP[i][j] = make_pair((gridval + max_val), prevcord);
                    
                    //downDP[i][j] = grid[i][j];
                }
            }
        }
        return downDP;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        vector<vector<int>> upDP(rows, vector<int>(cols));
        return 0;
    }
};


int main() {
    Solution st;
    vector<vector<int>> grid = { {0,1,-1}, {1,0,-1}, {1,-1,1} };
    //cout << st.cherryPickup(grid) << endl;
    vector<vector<pair<int, pair<int, int>>>> dp = st.downtraversal(grid);
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            cout << dp[i][j].first << " (" << dp[i][j].second.first << "," << dp[i][j].second.second << ")  ";
        }
        cout << endl;
    }
    cout << "sdaf" << endl;
}