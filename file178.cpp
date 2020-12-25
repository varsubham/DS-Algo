//range sum of sorted subarr sums

#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution
{
public:
    int rangeSum(vector<int> &nums, int n, int left, int right)
    {
        multiset<int> sorted_sum_arr;
        for (int i = 0; i < n; i++)
        {   
            int total_sum = 0;
            for (int j = i; j < n; j++)
            {   
                
                total_sum += nums[j];
                sorted_sum_arr.insert(total_sum);
            }
            
        }
        // auto itr = sorted_sum_arr.begin();
        // for(; itr != sorted_sum_arr.end(); itr++){
        //     cout << (*itr) << " ";
        // }
        // cout << endl;
        auto itr = sorted_sum_arr.begin();
        long long int total_sum = 0;
        int mod = (1e9 + 7);
        advance(itr, left - 1);
        cout << *itr << endl;
        int count = right - left + 1;
        while (count--)
        {
            total_sum += (*itr);
            itr++;
        }
        return total_sum % mod;
    }
};

int main() {
    Solution st;
    vector<int> nums = {1,2,3,4};
    int n = 4;
    int left = 1, right = 5;
    //st.rangeSum(nums, n, left, right);
   cout << st.rangeSum(nums, n, left, right)<< endl;
}
