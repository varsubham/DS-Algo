#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    map<int, int> mp;
    mp[2] = 232;   // these all takes O(log N) time
    mp[1] = 21;
    mp[7] = 9;
    cout << mp[9] << endl;    // this retreving also takes in O(log N) time
    map<int, int> cnt;
    vector<int> x = {1,3,34,6,7,54,23,1,2,3};
    for(int c : x){
        cnt[c] = cnt[c] + 1;
    }
    map<int, int> k;
    for(int i : x){
        if(!k[i])
            k[i];
    }
    auto itr = k.begin();
    for(; itr != k.end(); itr++){
        cout << itr->first << " " << itr->second << endl;
    }
}