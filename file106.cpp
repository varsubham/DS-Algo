// coin change problem using recursive approach
// wrong code

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int count = 0;
        int mincoins(vector<int> &coins, int amt, int i, int count){
            if(amt == 0 || i >= 3)
                return count;
            else{
                return min(mincoins(coins, amt - coins[i], i, count + 1), min(mincoins(coins, amt - coins[i + 1], i + 1, count + 1), mincoins(coins, amt - coins[i + 2], i + 2, count + 1)));
            }
        }
        int makechange(vector<int> &coins, int amt){
            return mincoins(coins, amt, 0, 0);
        }
};

int main(){
    vector<int> coins = {1, 3, 5};
    int amt = 11;
    Solution st;
    cout << st.makechange(coins, amt) << endl;
}