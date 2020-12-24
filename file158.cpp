// frog jump 2
// edge cases needs to be checked

#include <iostream>
#include <vector>
#define inf 1e9 + 5
using namespace std;
class Solution{
    public:
        int mincost(vector<int> heights, int k){
            vector<int> dp(heights.size());
            dp[0] = 0;
            for(int i = 1; i < heights.size(); i++){
                int min_val = inf;
                for(int j = 1; j <= k && i - j >= 0; j++){
                    min_val = min((dp[i - j] + abs(heights[i - j] - heights[i])), min_val);
                    
                }
                dp[i] = min_val;
            }
            return dp[heights.size() - 1];
        }
};

int main(){
    vector<int> heights = {40, 10 ,20 ,70, 80, 10, 20, 70, 80 ,60};
    int k = 4;
    Solution st;
    cout << st.mincost(heights, k) << endl;
}