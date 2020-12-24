// longest pallindromic subsequence
// wrong code (do a dry run to understand)

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution{
    public:
        bool repeatedOccurence(string s){
            unordered_set<char> us;
            for(int i = 0; i < s.size(); i++){
                if(us.find(s[i]) != us.end())
                    return true;
                us.insert(s[i]);
            }
            return false;
        }

        int maxpall = 0;
        int longestPallindromicSubsequence(string &s){
            
            if(s.size() == 0){
                return 0;
            }
            
            if(s.size() == 1){
                return 1;
            }
            if(!repeatedOccurence(s))
                return 1;
            else{
                for(int i = 0; i < s.size(); i++){
                    int k = 0;
                    for(int j = s.size() - 1; j > i; j--){
                        if(s[i] == s[j]){
                            string s_new = s.substr(i+1, j - i - 1);
                            k = 2 + longestPallindromicSubsequence(s_new);
                        }
                        maxpall = maxpall < k ? k : maxpall;
                    }
                    
                }
            }
            return maxpall;
        }
};

int main(){
    string s = "abcabcabcabc";
    Solution st;
    cout << st.longestPallindromicSubsequence(s) << endl;
}

//longestPalindromeSubseq