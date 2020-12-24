// minimun operation to reduce x to zero
// using recursive solution + memoization = dynamic programming

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std; 

class Solution{
    public:
        unordered_map<string, int> um;
        int minlength(vector<int> nums, int x, int left, int right, int count){
            if(x == 0)
                return count;
            if(x < 0 || left > right)
                return 1e6;
            string key = to_string(left) + "*" + to_string(right) + "*" + to_string(x);
            if(um.count(key))
                return um[key];
            int l = minlength(nums, x - nums[left], left+1, right, count + 1);
            int r = minlength(nums, x - nums[right], left,  right - 1, count + 1);
            um[key] = min(l,r);

            return um[key];
        }
        int minOperations(vector<int> &nums, int x){
            int ans = minlength(nums, x, 0, nums.size() - 1, 0);
            return ans >= 1e6 ? -1 : ans;
        }
            
};

int main(){
    Solution st;
    vector<int> nums = {1,1,4,2,3};
    int x = 5;
    cout << st.minOperations(nums, x) << endl;
}