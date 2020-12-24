// fog jump 1
// minimize height

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    int mincost(vector<int> heightStone){
        vector<int> dp(heightStone.size());
        dp[0] = 0;
        dp[1] = abs(heightStone[1] - heightStone[0]);
        for(int i = 2; i < dp.size(); i++){
            int min_val = min(dp[i - 1] + abs(heightStone[i] - heightStone[i - 1]), dp[i - 2] + abs(heightStone[i] - heightStone[i - 2]));
            //int i_val = dp[i - 1] == min_val ? i - 1 : i - 2;
            dp[i] = min_val ;
        }
        return dp[heightStone.size() - 1];
    }
};

int main(){
    vector<int> heightStone = {10,30,40,20};
    Solution st;
    cout << st.mincost(heightStone) << endl;
}