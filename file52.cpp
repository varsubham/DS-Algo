#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int num_zeros = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            num_zeros++;
            nums.erase(nums.begin() + i );
            i--;
        }
    }
    for (int i = 0; i < num_zeros; i++) {
        nums.push_back(0);
    }
}
int main() {
    vector<int> vt = { 0,1,0,3,12 };
    moveZeroes(vt);
    for (int i : vt)
        cout << i << ' ';
    cout << endl;
}