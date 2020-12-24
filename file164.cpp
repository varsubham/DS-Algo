// longest path - atcoder 

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int traversal(unordered_multimap<int, int>& umm, unordered_multimap<int, int>::iterator itr) {
    int longestlength = 0;
    while (itr != umm.end()) {
        int temp = itr->second;
        itr = umm.find(temp);
        //int temp_max = 0;
        longestlength++;
    }
    return longestlength;
}



int main() {
    int n, m;
    cin >> n >> m;
    unordered_multimap<int, int> umm;
    //vector<vector<int>> paths(n, vector<int>(2));   // n rows and 2 cols
    for (int i = 0; i < m; i++) {
        int key, val;
        cin >> key >> val;
        umm.insert({ key, val });
    }
    auto itr = umm.begin();
    int longlen = 0;
    while (itr != umm.end()) {
        longlen = max(longlen, traversal(umm, itr));
        itr++;
    }
    // auto itr2 = umm.find(1);

    // cout << traversal(umm, itr2) << endl;
    cout << longlen << endl;

}