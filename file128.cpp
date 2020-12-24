// 410. Split Array Largest Sum
// incomplete

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        // A hash function used to hash a pair of any kind 
        struct hash_pair { 
            template <class T1, class T2> 
            size_t operator()(const pair<T1, T2>& p) const
            { 
                auto hash1 = hash<T1>{}(p.first); 
                auto hash2 = hash<T2>{}(p.second); 
                return hash1 ^ hash2; 
            } 
        };
        // hash table stored for sum from start index to end index
        unordered_map<pair<int, int>, int, hash_pair> sumtable;

        // calculating sum from start and end index and storing in hashmap if not present;
        int sumOfArray(vector<int> &nums, int start, int end){
            if(sumtable.find(make_pair(start, end)) != sumtable.end())
                return sumtable[make_pair(start, end)];
            int sum = 0;
            for(int i = start; i <= end; i++){
                sum += nums[i];
            }
            sumtable[make_pair(start, end)] = sum;
            return sum;
        }

        int minLargestSum(vector<int> &nums, int start, int end, int m){
            //
            if(m == 0)
                return 0;
            if(m == 1)
                return sumOfArray(nums, start, nums.size() - 1);
            else{
                for(int i = start; i <= end; i++){

                }
            }
        }
        int splitArray(vector<int> &nums, int m){
            // write here
        }
};

int main(){
    vector<int> nums = {7,2,5,10,8};
    int m = 2;
    Solution st;
    cout << st.splitArray(nums, m) << endl;
}