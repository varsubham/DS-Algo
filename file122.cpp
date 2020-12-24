// leetcode 1674, Minimum Moves to Meke Array Complementary

// incomplete

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int find_avg(multimap<int, int> mm){
        int avg_val = 0;
        auto itr = mm.begin();
        int sum = 0;
        for(; itr != mm.end(); itr++){
            sum += (itr->first);
        }
        return (sum/(mm.size()));
    }
    
    struct comparefunc{
        bool operator() (pair<int, int> p1, pair<int, int> p2){
            return p1.first > p2.first;
    }
    };
    
    multimap<int, int>::iterator least_diff_element(multimap<int, int> mm, int avg, int diff_amt){
        int diff = 0;
        const int avg = find_avg(mm);

        // struct comparefunc{
        //     bool operator() (int p1, int p2) const {
        //         return abs(p1 - avg) < abs(p2 - avg);
        // }
        // };

        multimap<int, int, comparefunc> mymm;
    }
    int minMoves(vector<int>& nums, int limit) {
        int size = nums.size();
        multimap<int, int> mm;
        for(int i = 0; i < size / 2; i++){
            int temp = nums[i] + nums[size - 1 - i];
            int min_v = min(nums[i], nums[size - 1 - i]);
            mm.insert({temp, min_v});
        }
        
    }
};