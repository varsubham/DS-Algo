#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int maxProfit(vector<int>& prices) {
        int k = prices[0]; int max_profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1])
            {
                if(i == prices.size() - 1){
                    max_profit = max_profit + (prices[i] - k);
                }
            }
            else{
                max_profit = max_profit + (prices[i-1] - k);
                k = prices[i];
            }
        }
        return max_profit;
    }

int main(){
    vector<int> vt = {7,6,4,3,1};
    cout << maxProfit(vt) << endl;
    unordered_set<int> us;
    unordered_map<int,int> um;
    um.insert({23,23});
    um[12] = 354;
}