// 0-1 knapsack problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, w;
    cin >> n >> w;
    vector<vector<long long>> weight_cost(n, vector<long long>(2));
    for(long long i = 0; i < n; i++){
        long long weig, val;
        cin >> weig >> val;
        weight_cost[i][0] = weig;
        weight_cost[i][1] = val;
    }
    sort(weight_cost.begin(), weight_cost.end());
    vector<vector<long long>> dp(n + 1, vector<long long>(w + 1));
    // initializing the first row with 0
    for(long long i = 0; i < dp[0].size(); i++){
        dp[0][i] = 0;
    }
    // initializing the first col with 0
    for(long long i = 0; i < dp.size(); i++){
        dp[i][0] = 0;
    }
    // making the dp
    for(long long i = 1; i < dp.size(); i++){
        for(long long j = 1; j < dp[i].size(); j++){
            if(j >=weight_cost[i - 1][0]){
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight_cost[i - 1][0]] + weight_cost[i - 1][1]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w] << endl;
}