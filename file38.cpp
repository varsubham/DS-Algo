#include <iostream>
#include <queue>
#include <set>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int start = 0; int end = 0; int longest = 0; unordered_multiset<char> um;
        while(end < s.size()){
            if(um.find(s[end]) == um.end()){
                um.insert(s[end]);
                end++;
                if(um.size() > longest)
                    longest = um.size();
            }
            else if(um.find(s[end]) != um.end()){
                um.insert(s[end]);
                if(um.find(s[end]) != um.end()){
                    auto itr = um.find(s[start]);
                    um.erase(itr);
                    start++;
                }  
            }
        }
        return longest;
    }

int main(){
   cout << lengthOfLongestSubstring("abcabcbb") << endl;
}