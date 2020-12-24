#include <iostream>
#include <map>
using namespace std;
 bool isPallindrome(string s){
        string rev = "";
        for(int i = s.size() - 1; i >= 0; i--){
            rev.push_back(s[i]);
        }
        if(rev == s)
            return true;
        else
            return false;
    }
int main(){
    string st = "bab";
    map<int, string, greater<int>> st2;
    st2.insert({1,"asdf"});
    st2.insert({65, "asdfadsf"});
    auto itr = st2.begin();
    cout << itr->first << endl;
    cout << (st.substr(0, 1)).size() << endl;
}