#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main(){
    vector<int> vect;
    set<int> st;
    vect.push_back(23);
    vect.push_back(1);
    vect.push_back(98);
    vect.push_back(41);
    st.insert(23);
    st.insert(-5);
    st.insert(0);
    st.insert(41);
    st.insert(1);
    st.insert(23);

    set<int>::iterator sti = st.begin();
    for(; sti != st.end(); sti++)
        cout << *sti << endl;
    cout << "__________________" << endl;

    vector<int>::iterator it;
    for(it = vect.begin(); it != vect.end(); it++){
        cout << *it << endl;
    }

}