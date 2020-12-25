// subarray sum equal K

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        int subarraySum(vector<int> &nums, int k){
            int ans = 0, cum_sum = 0;

            unordered_map<int, int> pref_sum;

            for (int i : nums)
            {

                cum_sum += i;

                int req = cum_sum - k;

                if (req == 0)
                    ans++;

                ans += pref_sum.count(req) == 1 ? pref_sum[req] : 0;

                pref_sum[cum_sum]++;
            }

            return ans;
        }
};

int main(){
    Solution st;
    vector<int> nums = {1,2,3};
    int k = 3;
    cout << st.subarraySum(nums, k) << endl;
}