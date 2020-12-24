// Number of ways of climbing stairs given that we can only take 1 or 2 steps
// Using Dynamic programing

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    unordered_map<int, int> um;
    int f = 0;
    int climbStairs(int n) {
        if(um.find(n) != um.end()){
            return um[n];
        }
        if(n == 1 || n == 0){
            f = 1;
        }
        else{
            f = climbStairs(n-1) + climbStairs(n-2);
            um[n] = f;
        }
        return f;
    }
};

int main(){
    Solution st;
    cout << st.climbStairs(44) << endl;
}