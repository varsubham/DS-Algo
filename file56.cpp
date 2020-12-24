#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <stack>
#include <algorithm>

using namespace std;

int maxMin(int k, vector<int> arr) {
    set<int> st;
    multiset<int> sts;
    sts.insert(23);
    auto itr = sts.begin();
    int k = *st.begin();
    //st.erase();
    stack<int> stk;
    
    sort(arr.begin(), arr.end());
    int i = 0;
    while(i + k - 1 < arr.size()){
        int diff = arr[i + k - 1] - arr[i];
        st.insert(diff);
        i++;
    }
    auto itr = st.begin();
    return *itr;
}

int main(){
    vector<int> vt = {10,20,30,100,200,300,1000};
    cout << maxMin(3, vt);
}