// comparator function in case of multimap

#include <iostream>
#include <unordered_map>
#include <map>
#include <cmath>

using namespace std;
//int avg = 8;


int main(){
    const int avg = 4;
    struct comparefunc{
        bool operator() (int p1, int p2) const {
            return abs(p1 - avg) < abs(p2 - avg);
    }
    };

    multimap<int, int, comparefunc> umm;
    umm.insert({13, 6});
    umm.insert({10, 3});
    umm.insert({5, 1});
    umm.insert({4, 2});

    auto itr = umm.begin();
    for(; itr != umm.end(); itr++){
        cout << itr->first << "->" << itr->second << endl; 
    }
    

}