#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> st;
    st.insert(23);
    st.insert(15);
    st.insert(2);
    auto itr = st.find(1);
    if(itr != st.end()){
        cout << "found" << endl;
    }
    else
        cout << "not found" << endl;
    
}  