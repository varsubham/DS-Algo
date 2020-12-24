#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int size = nums.size();
        int current_pointer = nums[0];
        int count = 0;
        for(int i = 1; i < size; i++){
            if(count == 3){
                return true;
            }
            if(current_pointer < nums[i]){
                count++;
            }
            else{
                count = 0;
                
            }
            current_pointer = nums[i];
        }
        return false;
    }
};

int main(){
    Solution std;
    vector<int> nums = {1,2,3,4,5};
    cout << std.increasingTriplet(nums) << endl;
}