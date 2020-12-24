#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqueChar(string s){
    unordered_map<char, int> um;
    
    int final_ans = 0;
    for(int i = 0; i < s.size(); i++){
        um[s[i]]++;
    }
    for(int i = 0; i < s.size(); i++){
        auto itr = um.find(s[i]);
        if(itr->second == 1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s = "loveleetcode";
    cout << firstUniqueChar(s) << endl;
}