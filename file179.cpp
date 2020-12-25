// top k frequent elements

#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;


class Solution{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k){
            unordered_map<int, int> frequency;
            for(int i = 0; i < nums.size(); i++){
                frequency[nums[i]]++;
            }
            vector<pair<int, int>> vt;
            copy(frequency.begin(), frequency.end(), std::back_inserter<vector<pair<int, int>>>(vt));
            sort(vt.begin(), vt.end(), [](const pair<int, int> &l, const pair<int, int> &p) {
                //logic
                if(l.second != p.second)
                    return l.second > p.second;
                return l.first > p.first;
            });
            vector<int> final_vect;
            for(int i = 0; i < k; i++){
                final_vect.push_back(vt[i].first);
            }
            return final_vect;


            // for(pair<int, int> pr : vt){
            //     cout << pr.first << "-> " << pr.second << endl; 
            // }
        }
};

int main(){
    Solution st;
    vector<int> nums = {2, 1, 1, 1, 2, 2, 3};
    vector<int> k = st.topKFrequent(nums, 2);
    for(auto i : k)
        cout << i << endl;
    //st.topKFrequent(nums, 2);
} 