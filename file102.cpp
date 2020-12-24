// finding the min edit distance using dynamic programming
// i.e,. how similar are the two string s, t 

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> table(word1.size() + 1, vector<int>(word2.size() + 1));
        
        // initializing 0th row
        for(int i = 0; i < table[0].size(); i++){
            table[0][i] = i;
        }
        // initializing 0th col
        for(int i = 0; i < table.size(); i++){
            table[i][0] = i;
        }
        // bottom up approach
        
        for(int i = 1; i < table.size(); i++){
            for(int j = 1; j < table[0].size(); j++){
                if(word1[i - 1] == word2[j - 1]){
                    table[i][j] = table[i - 1][j - 1];
                }
                else{
                    table[i][j] = min(table[i - 1][j], min(table[i][j - 1], table[i - 1][j - 1])) + 1;
                }
            }
        }
        return table[word1.size()][word2.size()];
    }
};

int main(){
    Solution st;
    string word1 = "horse";
    string word2 = "horse";
    cout << st.minDistance(word1, word2) << endl;
    // vector<vector<int>> vt = st.minDistance(word1, word2);
    // for(int i = 0; i < vt.size(); i++){
    //     for(int j = 0; j < vt[0].size(); j++){
    //         cout << vt[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}