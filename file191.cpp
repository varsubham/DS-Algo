// kth smallest pair distance
// time limit exceed

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                pq.push(abs(nums[i] - nums[j]));
            }
        }
        while(k > 1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};

int main(){
    vector<int> nums = {1,3,1};
    int k = 1;
    Solution st;
    cout << st.smallestDistancePair(nums, k) << endl;
}