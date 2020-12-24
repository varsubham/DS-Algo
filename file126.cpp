// 343. Integer break for maximum product
// Dynamic Programming

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int integerBreak(int n){
            vector<int> dp(n + 1);
            dp[1] = 1;
            dp[2] = 1;
            if(n == 2)
                return dp[2];
            for(int i = 3; i <= n; i++){
                int max_val = 0;
                for(int j = 1; j < i; j++){
                    int first = j;
                    int second = i - j;
                    int temp = max((first*second), max((dp[first] * second), max((first * dp[second]), (dp[first] * dp[second]))));
                    max_val = max_val < temp ? temp : max_val; 
                }
                dp[i] = max_val;
            }
            return dp[n];
        }
};
int main(){
    Solution st;
    cout << st.integerBreak(10) << endl; 
}