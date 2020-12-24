// HOuse robber problem. Trying to rob to maxmize the profit given that we cannot rob adjacent houses.
// USing Dynamic programming bottom up approach


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> maxrobamt(nums);
        if(maxrobamt.size() == 0)
            return 0;
        if(maxrobamt.size() == 1)
            return nums[0];
        if(maxrobamt.size() == 2)
            return max(nums[0], nums[1]);
        if(maxrobamt.size() == 3)
            return max(nums[1], (nums[0]+nums[2]));
        maxrobamt[0] = nums[0];
        maxrobamt[1] = nums[1];
        maxrobamt[2] = nums[0] + nums[2];
        int max_val = max(maxrobamt[0], max(maxrobamt[1], maxrobamt[2]));
        for(int i = 3; i < nums.size(); i++){
            maxrobamt[i] = max(maxrobamt[i - 2], maxrobamt[i - 3]) + nums[i];
            if(max_val < maxrobamt[i])
                max_val = maxrobamt[i];
        }
        // int maxval = 0;
        // for(int i = 0; i < maxrobamt.size(); i++){
        //     if(maxval < maxrobamt[i])
        //         maxval = maxrobamt[i];
        // }
        return max_val;
    }
};

int main(){
    Solution st;

    vector<int> nums = {1,2,3,4,1,6,7};
    cout << st.rob(nums) << endl;
}