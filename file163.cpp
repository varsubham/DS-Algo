// longest common subsequence
// dynamic programming

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    vector<vector<int>> dp(t.size() + 1, vector<int>(s.size() + 1));

    //initiaizing the first row
    for(int i = 0; i < dp[0].size(); i++){
        dp[0][i] = 0;
    }
    // initializing the first col
    for(int i = 0; i < dp.size(); i++){
        dp[i][0] = 0;
    }

    // making the dp
    for(int i = 1; i < dp.size(); i++){
        for(int j = 1; j < dp[i].size(); j++){
            if(t[i - 1] == s[j - 1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    int i = dp.size() - 1; // last row
    int j = dp[0].size() - 1; // last col
    string lcs = "";
    while(i != 0 && j != 0){
        if(t[i - 1] == s[j - 1]){
            string temp(1, t[i-1]);
            lcs.insert(0,temp);
            //lcs.push_back(t[i - 1]);
            i--;
            j--;
        }
        else{
            if(dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    cout << lcs << endl;

}