// 1629. Slowest key
// used custom comparator function as lambda function for sorting

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        vector<pair<int, char>> mp;
        int size = releaseTimes.size();
        for(int i = 0; i < size; i++){
            char key = keysPressed[i];
            int time = i == 0 ? releaseTimes[0] : (releaseTimes[i] - releaseTimes[i - 1]);
            
            mp.push_back({time, key});
        }
        sort(mp.begin(), mp.end(), [] (pair<int, char> p1, pair<int, char> p2) {{
            bool temp = false;
            if(p1.first == p2.first){
                temp = p2.second < p1.second;
            }
            else
                temp = p2.first < p1.first;
            return temp;
    }}
        );

        return mp[0].second;
    }
};

int main(){
    //[12,23,36,46,62]
    //"spuda"
    string s= "ab";
    vector<int> vt = {1, 2};
    Solution st;
    cout << st.slowestKey(vt, s) << endl;
}