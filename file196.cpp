// K closest point to origin

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> final_result(k, vector<int>(2, 0));

        sort(points.begin(), points.end(), [](const vector<int> &v1, const vector<int> &v2) {
            return (pow(v1[0], 2) + pow(v1[1], 2)) < (pow(v2[0], 2) + pow(v2[1], 2));
        });

        for(int i = 0; i < k; i++){
            for(int j = 0; j < points[i].size(); j++){
                final_result[i][j] = points[i][j];
            }
        }
        return final_result;
    }
};

int main(){
    Solution st;
    vector<vector<int>> points = {{3,3}, {5,-1}, {-2,4}};
    int k = 2;
    vector<vector<int>> kclosest = st.kClosest(points, k);
    for(int i = 0; i < k; i++){
        for(int j = 0; j < 2; j++){
            cout << kclosest[i][j] << " ";
        }
        cout << endl;
    }
}