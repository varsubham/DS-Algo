#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    unordered_map<int, int> um;
    // vector<int> vt;
    // vt.push_back(23);
    // auto itr1 = upper_bound(vt.begin(), vt.end(), 22);
    // if(itr1 != vt.end())
    //     cout << *itr1 << endl;
    // else
    //     cout << "not" << endl;
    um.insert({12,5999});
    um.insert({13,564});   // this is not inserted
    um.erase(um.begin());
    auto itr = um.upper_bound(12);
    cout << itr->second << endl;
    // auto itr = um.find(12);
    // if(itr != um.end())
    //     cout << itr->second << endl;
    // else{
    //     cout << "Not found " << endl;
    // }
    //cout << um[963] << endl;
}