#include <iostream>
#include <map>

using namespace std;
int main(){
    map<int, int> mp;
    multimap<int, int> mulmp;
    mulmp.insert({2,4});
    mulmp.insert({3,6});
    mulmp.insert({3,23});
    mulmp.insert({4,96});
    mulmp.insert({5,74});
    mulmp.insert({8,15});

    auto itr = mulmp.begin();
    auto itr2 = mulmp.find(3);
    cout << itr2->second << endl;
    // for(;itr != mulmp.end(); itr++){
    //     cout << itr->first << "       " << itr->second << endl;
    // }

}