// find common characters

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{

    void hash_fill(string &s, int *hash){
        int n = s.size();
        for (int i = 0; i < n; i++)
            hash[s[i] - 'a']++;
    }

    void common_hash(int *hash1, int *hash2){
        for (int i = 0; i < 26; i++)
            hash1[i] = min(hash1[i], hash2[i]);
    }

public:
    vector<string> commonChars(vector<string> &v){
        int hash1[26] = {0}, hash2[26] = {0};
        int n = v.size();
        hash_fill(v[0], hash1);
        for (int i = 1; i < n; i++){
            for (int i = 0; i < 26; i++)
                hash2[i] = 0;
            hash_fill(v[i], hash2);
            common_hash(hash1, hash2);
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++)
            if (hash1[i]){
                char ch = i + 97;
                string temp = "";
                temp += ch;
                for (int j = 0; j < hash1[i]; j++)
                    ans.push_back(temp);
            }
        return ans;
    }
};

int main(){
    Solution st;
    vector<string> A = {"bella","label","roller"};
    vector<string> vt = st.commonChars(A);

    for(auto i : vt){
        cout << i << " ";
    }
    cout << endl;
}