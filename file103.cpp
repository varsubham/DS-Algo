// cherry pickup using 1 robot only
// dynamic problem

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int cherrycount = 0;
    int maxcherry(vector<vector<int>> &grid, int i, int j){
        if(i >= grid.size())
            return 0;
        else{
            if(j == 0){
                cherrycount = max(maxcherry(grid, i+1, j), maxcherry(grid, i+1, j+1)) + grid[i][j];
            }
            else if(j == grid[0].size() - 1){
                cherrycount = max(maxcherry(grid, i+1, j), maxcherry(grid, i+1, j-1)) + grid[i][j];
            }
            else{
                cherrycount = max(maxcherry(grid, i+1, j), max(maxcherry(grid, i+1, j-1), maxcherry(grid, i+1, j+1))) + grid[i][j];
            }
        }
        return cherrycount;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int k = maxcherry(grid, 0, 0);
        //int a = maxcherry(grid, 0, grid[0].size() - 1);
        return k;
    }
};

int main(){
    vector<vector<int>> grid = {{3,1,1},{2,5,1},{1,5,5},{2,1,1}};
    //vector<vector<int>> grid = {{1,0,0,0,0,0,1},{2,0,0,0,0,3,0},{2,0,9,0,0,0,0},{0,3,0,5,4,0,0},{1,0,2,3,0,0,6}};
    Solution st;
    cout << st.cherryPickup(grid) << endl;
    // for(int i = 0; i < grid.size(); i++){
    //     for(int j = 0; j < grid[0].size(); j++)
    //         cout << grid[i][j] << ' ';
    //         cout << endl;
    // }
}