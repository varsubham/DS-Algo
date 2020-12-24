// min-cost climbing stairs. Here we can climb either 1 or 2 steps and there is a cost array associated with each step.
// minimize the cost of climbing using Dynamic Programming 
// We will be using dynamic programming bottom up approach

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> mincostclimb(cost.size());
        if(cost.size() == 0)
            return 0;
        mincostclimb[0] = cost[0];
        mincostclimb[1] = cost[1];
        if(cost.size() == 2){
            return min(mincostclimb[0] , mincostclimb[1]);
        }
        if(cost.size() == 1){
            return mincostclimb[0];
        }
        for(int i = 2; i < cost.size(); i++){
            mincostclimb[i] = min(mincostclimb[i - 1], mincostclimb[i - 2]) + cost[i];
        }
        return min(mincostclimb[cost.size() - 1], mincostclimb[cost.size() - 2]);
    }
};

int main(){
    Solution st;
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << st.minCostClimbingStairs(cost) << endl;
}