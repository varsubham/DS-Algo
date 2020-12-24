#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int current_element = nums[0];int count = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != current_element)
            {
                count++;
                current_element = nums[i];
            } 
        }
        return count;
    }

int main(){
    vector<int> vt = {1,1,2};
    //vt.unique
    int k = 234;
    cout << removeDuplicates(vt) << endl;
}