// Finding the best time to buy and sell stock given the array of prices of different days


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if(size == 0)
            return 0;
        int buy_price = prices[0];
        int sell_price = prices[0];
        int max_difference = 0;
        for(int i = 1; i < size; i++){
            if(prices[i] <= buy_price){
                buy_price = prices[i];
            }
            if(max_difference < prices[i] - buy_price){
                max_difference = prices[i] - buy_price;
            }
        }
        return max_difference;
    }
};

int main(){
    Solution st;
    vector<int> prices = {7,6,4,3,1};
    cout << st.maxProfit(prices) << endl;
}