// 1664. Ways to Make a Fair Array
// 

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        pair<int, int> sumEvenOdd(vector<int> &nums){
            int even_sum = 0;
            int odd_sum = 0;
            int size = nums.size();
            for(int i = 0; i < size; i++){
                if(i % 2 == 0)
                    even_sum += nums[i];
                else
                    odd_sum += nums[i];
            }
            return make_pair(even_sum, odd_sum);
        }
        int waysToMakeFair(vector<int>& nums) {
            int even_sum = sumEvenOdd(nums).first;
            int odd_sum = sumEvenOdd(nums).second;
            int size = nums.size();
            int prev_even_sum = 0;
            int prev_odd_sum = 0;
            int count = 0;
            for(int i = 0; i < size; i++){
                int evn = 0;
                int odd = 0;
                if(i % 2 == 0){
                    // even
                    evn = even_sum - nums[i] - prev_even_sum + prev_odd_sum;
                    odd = odd_sum - prev_odd_sum + prev_even_sum;
                    prev_even_sum += nums[i];
                }
                else{
                    // odd
                    odd = odd_sum - nums[i] - prev_odd_sum + prev_even_sum;
                    evn = even_sum - prev_even_sum + prev_odd_sum;
                    prev_odd_sum += nums[i];
                }
                if(evn == odd)
                    count++;
            }
            return count;
    }
};


int main(){
    Solution st;
    vector<int> nums = {1,2,3};
    cout << st.waysToMakeFair(nums) << endl;
}