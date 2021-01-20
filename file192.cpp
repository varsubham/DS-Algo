// kth smallest pair distance

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    
    pair<int, int> helper(vector<int> &nums, int val){
        pair<int, int> res = {0, 0};
        int i = 0;
        for(int num : nums){
            int x = num + val;
            int idx1 = upper_bound(nums.begin(), nums.end(), x) - nums.begin();
            int idx2 = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
            
            if(nums[idx1] != x) idx1--;
            res.second += idx1 - i;
            
            if(idx2 == nums.size() || nums[idx2] >= x) idx2--;
            res.first += idx2 - i;
            i++;
        }
        return res;
    }
    
    int smallestDistancePair(vector<int>& nums, int k) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int lo = 0, hi = nums.back() - nums[0];
        
        while(lo < hi){
            int mid = (lo + hi) / 2;
            
            pair<int, int> val = helper(nums, mid);
            
            if(k > val.first && k <= val.second){
                if(val.first < val.second) return mid;
                hi = mid - 1;
            }
            else if(k <= val.first) hi = mid - 1;
            else lo = mid + 1;
        }
        
        return lo;
    }
};

int main(){
    vector<int> nums = {1,3,1};
    int k = 1;
    Solution st;
    cout << st.smallestDistancePair(nums, k) << endl;
}