#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> countnum;
        for(int i = 0; i < nums.size(); i++){
            countnum[nums[i]]++;
        }
        auto itr = countnum.begin();
        int total_count = 0;
        for(; itr != countnum.end(); itr++){
            if(itr->second > 1){
                total_count += ((itr->second) * ((itr->second) - 1)) / 2;
            }
        }
        return total_count;
    }
};

int main(){
    vector<int> nums = {1, 2,3,1,1,3};
    Solution st;
    cout << st.numIdenticalPairs(nums) << endl;
    }
