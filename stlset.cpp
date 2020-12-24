#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    set<int> st;
    st.insert(45);
    st.insert(-23);
    st.insert(44);
    st.insert(4);       // -23, 4, 44, 45
    for(int i : st)
        cout << i << " ";
    cout << endl;
    
    auto itr = st.find(45);
    if(itr == st.end())       // iterator return itr.end() if number is not present
        cout << "Number no present" << endl;
    else{
        cout << "Number is present" << endl;
        cout << *itr << endl;
    }
    bool ispresent = binary_search(st.begin(), st.end(), 2);  // O(log N)
    cout << ispresent << endl;
    auto itr2 = lower_bound(st.begin(), st.end(), 4);   // O(log N)

    // since set are sorted, therefore they have their own lower and upper bound func
    auto itr3 = st.upper_bound(4);
    cout << *itr3 << endl;
}