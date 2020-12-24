// sliding window maximum

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
    public:
        vector<int> maxSlidingWindow(vector<int> &nums, int k){
            int i = 0; int j = k - 1; int size = nums.size();
            if(size == 1){
                return nums;
            }
            vector<int> final_vect;
            map<int, int, greater<int>> mp;
            // initializing map
            for(int temp = i; temp <= j; temp++){
                mp[nums[temp]]++;
            }
            final_vect.push_back(mp.begin()->first);
            i++;
            j++;
            while(j < size){
                int prev_element = nums[i - 1];
                mp[prev_element]--;
                if(mp[prev_element] == 0)
                    mp.erase(prev_element);
                int next_element = nums[j];
                mp[next_element]++;
                final_vect.push_back(mp.begin()->first);
                i++;j++;
            }
            return final_vect;
            
        }
};

int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    Solution st;
    vector<int> vt = st.maxSlidingWindow(nums, k);
    for(auto i : vt){
        cout << i << " ";
    }
    cout << endl;
 }