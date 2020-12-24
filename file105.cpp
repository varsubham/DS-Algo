// zigzag string problem
// not correct code

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        int incrementval = numRows + (numRows - 2);
        string finalstring = "";
        for (int i = 0; i < numRows; i++) {
            int middlepointer = numRows + (numRows - 2) - 1 + i - 1;
            for (int j = i; j < s.size(); j += incrementval) {
                if (i == 0 || i == numRows - 1) {
                    finalstring.push_back(s[j]);
                }
                else {
                    if (middlepointer > j && middlepointer < j + incrementval) {
                        finalstring.push_back(s[j]);
                        if(middlepointer < s.size())
                            finalstring.push_back(s[middlepointer]);
                        middlepointer += incrementval;
                    }
                    else {
                        finalstring.push_back(s[j]);
                    }
                }

            }
        }
        return finalstring;
    }
};

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;
    Solution st;
    cout << st.convert(s, numRows) << endl;
}