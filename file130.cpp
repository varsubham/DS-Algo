// make change problem
// recursive approach


#include <iostream>
#include <vector>

using namespace std;
int k = INT16_MAX;
int makechange(vector<int> &coins, int num_coin, int n){
   
    if(n == 0)
        return min(k, num_coin);
    
    else{
        for(int i = 0; i < coins.size(); i++){
            if(n - coins[i] >= 0)
                k = min((makechange(coins, num_coin + 1, n - coins[i])), k);
        }
    }
    return k;
}
int main(){
    vector<int> coins = {1, 3, 5};
    cout << makechange(coins,0, 50) << endl;
}