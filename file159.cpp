// vacation (atcoder)
// dynamic programming

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> dp(3, 0);
    while(n--){
        vector<int> costs(3);
        vector<int> new_dp(3);
        for(int i = 0; i < 3; i++){
            int temp;
            cin >> temp;
            costs[i] = temp;
        }
        // dp[i] is the max happiness points

        for(int i = 0; i < 3; i++){
            int max_cost = 0;
            for(int j = 0; j < 3; j++){
                if(i != j){
                    new_dp[j] = max(new_dp[j], dp[i] + costs[j]);
                }
            }
            
        }
        dp = new_dp;
    }
    cout << max(dp[0], max(dp[1], dp[2])) << endl;
}