#include <iostream>
#include <map>

using namespace std;
int main(){
    map<int, int> mp;
    mp[1] = 34;
    mp.insert(make_pair(1, 98));
    auto itr = mp.begin();
    for(; itr != mp.end(); itr++){
        cout << itr->first << " " << itr->second <<  " ";
    }
    cout << endl;
}
