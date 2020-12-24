#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        if(nums.size() == 0){
            return 0;
        }
        auto current_pointer = nums.begin();
        auto next_pointer = nums.begin();
        auto itr = nums.begin();
        for(; itr != nums.end(); itr++){
            next_pointer = itr;
            if(count == 2){
                nums.erase(itr);
                count = 0;
                current_pointer = itr;
            }
            else if(next_pointer == current_pointer){
                count++;
            }
            else{
                count = 0;
                current_pointer = itr;
            }
        }
        return nums.size();
    }
};

int main(){
    Solution st;
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    cout << st.removeDuplicates(nums) << endl;
    for(auto itr = nums.begin(); itr != nums.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
}