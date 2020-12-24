// 343. Integer Break
// Recursive approach

// Memoize it for increasing runtime speed

#include <iostream>
#include <climits>
using namespace std;

class Solution{
    public:
        int k = 0;
        int integerBreak(int n){
            if(n < 1)
                return 0;
            if(n == 1)
                return 1;
            if(n == 2){
                return 1;
            }
            else{
                int ans = INT_MIN;
                for(int i = 2; i < n; i++){
                    int temp = n - i;
                    int prod = i * temp;
                    int first = i;
                    int second = n - i;

                    int k =  max((first*second), ((first * integerBreak(second))));
                    ans = max(k, ans);
                    
                }
                return ans;
            }
            return 0;
        }
};

int main(){
    Solution st;
    cout << st.integerBreak(39) << endl;
}