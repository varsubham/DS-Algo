// max increase to keep city skyline

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
    {
        vector<int> top_bottom(grid[0].size());
        vector<int> left_right(grid.size());
        // fill the top_bottom
        for (int i = 0; i < grid.size(); i++)
        {
            int temp1 = 0;
            int temp2 = 0;
            for (int j = 0; j < grid[i].size(); j++)
            {
                temp1 = max(temp1, grid[j][i]);
                temp2 = max(temp2, grid[i][j]);
            }
            top_bottom[i] = temp1;
            left_right[i] = temp2;
        }
        int max_inc = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                max_inc += (min(top_bottom[j], left_right[i]) - grid[i][j]);
            }
        }
        return max_inc;
    }
};

int main() {
    vector<vector<int>> grid = {{3,0,8,4}, {2,4,5,7}, {9,2,6,3}, {0,3,1,0}};
    Solution st;
    cout << st.maxIncreaseKeepingSkyline(grid) << endl;
}