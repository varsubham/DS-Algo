// is subsequence problem 

#include <iostream>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int size = t.size();
        int current_s = 0;
        for(int i = 0; i < size; i++){
            if(s[current_s] == t[i]){
                count++;
                current_s++;
            }
        }
        return current_s == s.size() ? true : false;
    }
};

int main(){
    Solution st;
    string s = "abc";
    string t = "asdbogc";
    cout << st.isSubsequence(s, t) << endl;
}