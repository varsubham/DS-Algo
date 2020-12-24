// Vector max sub array sum

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int maxsum = nums[0];
        int current_sum = nums[0];
        for(int i = 1; i < size; i++){
            if(current_sum + nums[i] < nums[i]){
                current_sum = nums[i];
            }
            else{
                current_sum += nums[i];
            }
            if(maxsum < current_sum){
                maxsum = current_sum;
            }
        }
        return maxsum;
    }
};

int main(){
    Solution st;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << st.maxSubArray(nums) << endl;
}