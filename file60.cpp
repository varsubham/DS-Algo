#include <cmath>
#include <cstdio>
#include <stack>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> vt;
    vector<int> final_vt;
    set<int> st;
    while(n--){
        int temp;
        cin >> temp;
        vt.push_back(temp);
        st.insert(temp);
    }
    stack<int> stk;
    for(int i : vt){
        int lest_val = *st.begin();
        
        if(i == lest_val){
            final_vt.push_back(i);
            st.erase(lest_val);
        }
        else if(i != lest_val){
            stk.push(i);
            st.erase(i);
        }
    }
    while(stk.size()){
        final_vt.push_back(stk.top());
        stk.pop();
    }
    for(int i : final_vt)
        cout << i << " ";
    cout << endl;
    return 0;
}
