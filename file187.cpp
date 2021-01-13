// min boats to save people

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int l = 0, r = n-1;
        int ans = 0;
        
        while(l <= r)
        {
            if(people[r] + people[l] <= limit) l++;
            
            r--;
            ans++;
        }
        
        return ans;
    }
};

int main(){
    vector<int> people = {3,2,2,1};
    int limit = 3;
    Solution st;
    cout << st.numRescueBoats(people, limit) << endl;
}