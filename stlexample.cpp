#include <iostream>
#include <map>
#include <set>
using namespace std;

int main(){
    set<pair<int, int>> st;
    int len;
    cin >> len;
    while(len--){
        int x, y;
        cin >> x >> y;
        st.insert({x, y});
    }
    int query;
    cin >> query;
    auto itr = st.upper_bound({query, INT16_MAX});
    itr--;
    if(itr->first <= query && itr->second >= query)
        cout << "found" << itr->first << " ," << itr->second << endl;
    else
        cout << "not found" << endl;
}