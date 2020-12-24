// encoding and decoding a URL
// just like tinyurl

#include <iostream>
#include <cmath>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:

    // Encodes a URL to a shortened URL.
    
    #define A 54059 /* a prime */
    #define B 76963 /* another prime */
    #define C 86969 /* yet another prime */
    #define FIRSTH 37 /* also prime */
    string hash_str(string s)
    {
       unsigned h = FIRSTH;
       int i = 0;
       while (i < s.size()) {
         h = (h * A) ^ (s[i] * B);
         i++;
       }
       string finalstr = to_string(h%C);
       return finalstr; // or return h % C;

    }
    
    
    unordered_map<string, string> databasething;
    string encode(string longUrl) {
        string encodedstr = hash_str(longUrl);
        string finalstring = "http://tinyurl.com/" + encodedstr;

        databasething[finalstring] = longUrl;
        return finalstring;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return databasething[shortUrl];
    }
};

int main(){
    string s = "https://leetcode.com/problems/design-tinyurl";
    // int k = 2323; 
    // string k1 = to_string(k);
    // cout << k1 << endl;
    Solution st;
    string encodedstr = st.encode(s);
    cout << st.encode(s) << endl;

    cout << st.databasething[encodedstr] << endl;

    
    //cout << hash_str(s) << endl;
}