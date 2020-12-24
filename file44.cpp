#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return nums.size();
        auto itr = nums.begin(); int current_element = *itr;
        
        itr++;
        
        while(itr != nums.end()){
            if(current_element == *itr){
                nums.erase(itr);
            }
            else{
                itr++;
                current_element = *itr;
            }
        }
        return nums.size();
    }

int main(){
    vector<int> vt = {};
    cout << removeDuplicates(vt) << endl;
    for(auto i : vt)
        cout << i << " ";
    cout << endl;
}