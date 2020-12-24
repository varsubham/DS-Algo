// rectangular block stacking problem using dynamic programming
// wrong code

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    // utility function to remove all the blocks with length and width less than or
    // equal to the block
    vector<vector<int>> rectSubset(vector<vector<int>> rect_block, vector<int> block) {
        int length_block = block[0];
        int width_block = block[1];
        int height_block = block[2];
        auto itr = rect_block.begin();
        vector<vector<int>> new_vect;
        for (; itr != rect_block.end(); itr++) {
            if ((*itr)[0] <= length_block && (*itr)[1] <= width_block) {
                continue;
            }
            else
                new_vect.push_back(*itr);
        }
        return new_vect;
    }
    int k = 0;
    int maxheight(vector<vector<int>>& rect_block) {
        if (rect_block.size() == 0) {
            return 0;
        }
        else {
            auto itr = rect_block.begin();
            
            for (; itr != rect_block.end(); itr++) {
                //return max((*itr)[2] + maxheight(rectSubset(rect_block, *itr)()));
                int temp = (*itr)[2];
                vector<vector<int>> new_block = rectSubset(rect_block, *itr);
                k = max(k, (temp + maxheight(new_block)));
            }
            return k;
        }
    }
};

int main() {
    Solution st;
    // {l, w, h}
    //vector<vector<int>> rect_block = { {2, 1, 3}, {3, 2, 1}, {5, 4, 6}, {6, 5, 4}, {7, 6, 4}, {12, 10, 32}, {32, 12, 10} };
    vector<vector<int>> rect_block = { {3, 9, 9}, {1, 10, 4}, {5, 11, 10}, {3,3, 9}, {1,3,5}, {7, 1, 12} };
    cout << st.maxheight(rect_block) << endl;
}