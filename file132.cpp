#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int RomToNum(char ch){
        switch(ch){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int num_val = 0;
        int size = s.size();
        for(int i = 0; i < size; i++){
            
            if((s[i] == 'I') && (s[i+1] == 'V' || s[i+1] == 'X') && (i < size - 1)){
                num_val += (RomToNum(s[i+1]) - RomToNum(s[i]));
                i++;
            }
            else if((s[i] == 'X') && (s[i+1] == 'L' || s[i+1] == 'C') && (i < size - 1)){
                num_val += (RomToNum(s[i+1]) - RomToNum(s[i]));
                i++;
            }
            else if((s[i] == 'C') && (s[i+1] == 'D' || s[i+1] == 'M') && (i < size - 1)){
                num_val += (RomToNum(s[i+1]) - RomToNum(s[i]));
                i++;
            }
            else{
                num_val += RomToNum(s[i]);
            }  
        }
        return num_val;
    }
};
int main(){
    string s = "LVIII";
    Solution st;
    cout << st.romanToInt(s) << endl;
    //cout << RomToNum(ch) << endl;
}