// maximum sum obtained any permutation


#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;;

class Solution {
    public:
        int maxSumRangeQuery(vector<int> &nums, vector<vector<int>> &requests){
            // unordered_map<int, int> um;
            // for(auto i : requests){
            //     for(int j = i[0]; j <= i[1]; j++){
            //         um[j]++;
            //     }
            // }
            // vector<int> temp(um.size());
            // int index = 0;
            // for(auto i : um){
            //     temp[index++] = i.second;
            // }
            // priority_queue<int> sorted_pq(temp.begin(), temp.end());
            //cout << sorted_pq.top() << endl;

            //vector<pair<int, int>> sorted_um;
            // multiset<int, greater<int>> sorted_um;
            // auto itr = um.begin();
            // for(; itr != um.end(); itr++){
            //     sorted_um.insert(itr->second);
            // }
            // for(auto i : sorted_um)
            //     cout << i << endl;

            // copy(um.begin(), um.end(), std::back_inserter<vector<pair<int, int>>>(sorted_um));
            // sort(sorted_um.begin(), sorted_um.end(), [](const pair<int, int> &p, const pair<int, int> &l) {
            //     // add the logic
            //     if(p.second != l.second)
            //         return l.second < p.second;
            //     return l.first < p.first;

            // });
            // for(auto i : sorted_um)
            //     cout << i.first << "-> " << i.second << endl;
    
            // priorty queue
            // O(n);
            // priority_queue<int> pq(nums.begin(), nums.end());
            // // run through all elements;
            // long long int maxsum = 0;
            // int MOD = 1e9 + 7;

            // while(!sorted_pq.empty()){
            //     int max_prior = pq.top();
            //     int temp = sorted_pq.top();
            //     maxsum += (max_prior * temp);
            //     pq.pop();
            //     sorted_pq.pop();
            // }


            // // for(auto i : sorted_um){
            // //     int max_prior = pq.top();
            // //     maxsum += (max_prior * i);
            // //     pq.pop();
            // // }
            // return maxsum % MOD;
            vector<int> cnt(nums.size());
            for (auto &r : requests)
            {
                cnt[r[0]] += 1;
                if (r[1] + 1 < nums.size())
                    cnt[r[1] + 1] -= 1;
            }
            for (auto i = 1; i < cnt.size(); ++i)
                cnt[i] += cnt[i - 1];
            sort(begin(nums), end(nums));
            sort(begin(cnt), end(cnt));
            long res = 0;
            for (auto i = 0; i < nums.size(); ++i)
                res = (res + (long)nums[i] * cnt[i]) % 1000000007;
            return res;
        
        }
};

int main(){
    // 
    vector<int> nums = {1,2,3,4,5,10};
    vector<vector<int>> requests = {{0,2}, {1,3},{1,1}};
    Solution st;
    cout << st.maxSumRangeQuery(nums, requests) << endl;
}