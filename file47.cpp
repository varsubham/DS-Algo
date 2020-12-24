#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>
#include <set>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;vector<int> final_vect;
        set<int> st;
        st.erase(2);
        for(int i = 0; i < nums1.size(); i++){
            mp[nums1[i]]++;
        }
        for(int i = 0; i < nums2.size(); i++){
            if(mp[nums2[i]] > 0){
                final_vect.push_back(nums2[i]);
                mp[nums2[i]]--;
                // if(mp.find(mp[nums2[i]])->second == 0)
                //     mp.erase(mp.find(mp[nums2[i]]));
            }
        }
        return final_vect;
    }

int main(){
    vector<int> vt = {1,2,2,1};
    vector<int> vt2 = {2,2};
    vector<int> vt3 = intersect(vt, vt2);
    for(int i: vt3)
        cout << i << " ";
    cout << endl;
}