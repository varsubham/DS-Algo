// can jump leetcode
// wrong code

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        queue<int> indexes;
        for(int i = 0; i < nums.size(); i++){
            int max_jump = nums[i];
            if(max_jump == 0){
                continue;
            }
            for(int j = 1; j <= max_jump; j++){
                indexes.push(i+j);
            }
        }
        while(!indexes.empty()){
            int top = indexes.front();
            if(top == nums.size() - 1){
                return true;
            }
            if(top >= nums.size()){
                indexes.pop();
            }
            else{
                if(nums[top] == 0){
                    indexes.pop();
                }
                else{
                    for(int i = 1; i <= nums[top]; i++){
                        indexes.push(top + i);
                    }
                    indexes.pop();
                }
            }
        }
        return false;
    }
};

int main(){
    Solution st;
    vector<int> nums = {2,3,1,1,4};
    cout << st.canJump(nums) << endl;
}