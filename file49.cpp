#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void reverseString(vector<char>& s) {
        int start = 0; int end = s.size() - 1;
        while(start < end){
            char temp = s[end];
            s[end] = s[start];
            s[start] = temp;
            start++;
            end--;
        }
    }

int main(){
    // vector<char> vt = {'h','e','l','l'};
    // reverseString(vt);
    // for(char ch: vt)
    //     cout << ch << ' ';
    // cout << endl;
    unordered_map<char, int> um;
    um.insert({'a', 34});
    um.insert({'b', 74});
    um.insert({'d', 100});
    um.insert({'c', 134});
    auto itr = um.begin();
    for(; itr != um.end(); itr++)
        cout << itr->first << "  " << itr->second << endl;

}