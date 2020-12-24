#include <iostream>
#include <unordered_map>

#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &vt, int target){
    unordered_map<int, int> um; vector<int> res;
    int size = vt.size();
    for(int i = 0; i < size; i++){
        int diff = target - vt[i];
        auto itr = um.find(diff);
        if(itr != um.end() && itr->second != i){
            res.push_back(itr->second);
            res.push_back(i);
            return res;
        }
        um.insert({vt[i], i});
    }
    return res;
}

int main(){
    vector<int> vt = {2,7,11,15, 7};
    int target = 9;
    vector<int> vt2 = twoSum(vt, target);
    for(int i : vt2)
        cout << i << " ";
    cout << endl;
}