// binary search, upperbound, lowerbound

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vt = {1,2,5,6,8,9,10,10, 10, 10, 34,56,78};
    auto itr = binary_search(vt.begin(), vt.end(), 8);
    auto itr2 = lower_bound(vt.begin(), vt.end(), 10);
    auto itr3 = upper_bound(vt.begin(), vt.end(), 78);
    int index2 = itr3 - vt.begin();
    int index = itr2 - vt.begin();
    int index3 = itr3 - itr2;
    cout << index3 << endl;
}