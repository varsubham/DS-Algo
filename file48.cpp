#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
        unordered_multimap<int, int> us;vector<int> pair;
        for(int i = 0; i < nums.size(); i++)
            us.insert({nums[i], i});
        for(int i = 0; i < nums.size(); i++){
            if(us.find(target - nums[i]) != us.end()){
                auto temp = us.find(target - nums[i]);
                pair.push_back(temp->second);
                pair.push_back(i);
                return pair;
            }
        }
        return pair;
    }
int main(){
    vector<int> vt = {2,7,11,15};
    vector<int> pr = twoSum(vt, 9);
    cout << pr[0] << pr[1] << endl;
}