// longest commom subsequence problem
// using dynamic programming

#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        int longestcommonsubsequence(string &a, string &b){
            // initialization of vect with b.size() + 1 rows and a.size() + 1 cols;
            vector<vector<int>> vect(b.size() + 1, vector<int> (a.size() + 1));

            // initialize first row
            for(int i = 0; i < vect[0].size(); i++)
                vect[0][i] = 0;
            // initialize first col
            for(int i = 0; i < vect.size(); i++)
                vect[i][0] = 0;
            

            // bottom up approach for filling vect;
            for(int i = 1; i < vect.size(); i++){
                //bool used = false;
                for(int j = 1; j < vect[i].size(); j++){

                    if(b[i - 1] == a[j - 1]){
                        vect[i][j] = vect[i - 1][j - 1] + 1;
                        //used = true;
                    }
                    else{
                        vect[i][j] = max(vect[i - 1][j], vect[i][j - 1]);
                    }
                }
            }
            return vect[b.size()][a.size()];
        }
};


int main(){
    Solution st;
//     "bsbininm"
// "jmjkbkjkv"
    string a = "abcba";
    string b = "abcbcba";
    cout << st.longestcommonsubsequence(a, b) << endl;
    // vector<vector<int>> vt = st.longestcommonsubsequence(a, b);
    // for(int i = 0; i < vt.size(); i++){
    //     for(int j = 0; j < vt[i].size(); j++){
    //         cout << vt[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}