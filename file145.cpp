// map

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    int k = __builtin_popcount(5);
    cout << k << endl;
    // multiset<int> st;
    // st.insert(23);
    // st.insert(63);
    // st.insert(8);
    // st.insert(8);
    // st.insert(12);
    // st.insert(2);
    // auto itr = st.find(1);
    // if(itr != st.end()){
    //     cout << *itr << endl;
    // }
    // else
    // {
    //     cout << "not found " << endl;
    // }
    
    // int c = st.count(8);
    // cout << c << endl;
    // auto itr = lower_bound(st.begin(), st.end(), 8);
    // itr++;
    // while(*itr != 23){
    //     itr++;
    // }
    // cout << *itr << endl;
    // vector<int> vt = {23,4,5,6,7,8, 4,5,7, 2, 1, 6}; // 4,4,5,5,6,7,7,8,23
    // // O(n);
    // make_heap(vt.begin(), vt.end());
    // for(auto i : vt)
    //     cout << i << " ";
    // cout << endl;

    // priority_queue<int, vector<int>, greater<int>> pq(vt.begin(), vt.end());
    // int k;
    // cin >> k;
    // //o(k)
    // while(--k){
    //     pq.pop();
    // }
    // cout << pq.top() << endl;

    //o(n + k);
    // auto itr1 = vt.begin();
    // auto itr2 = vt.end();
    // itr1+2;
    // cout << (itr2 - itr1) << endl;
    // map<int, int> mp;
    // mp[2] = 34;
    // // log(N) for find
    // auto itr = mp.find(2);
    // cout << itr->second << endl;
}