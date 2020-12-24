// leetcode problem
// 1663. Smallest String With A Given Numeric Value
// using recursion 😉


#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    
    string strval(int k){
        char ch = k + 96;
        string temp;
        temp += ch;
        return temp;
    }
    
    string getSmallestString(int n, int k) {
        if(n == 0 && k == 0)
            return "";
        
        else if(k > 26 && ((k - 26) >= (n - 1))){
            return getSmallestString(n - 1, k - 26) + "z";
        }
        else if(k > 26 && ((k - 26) < (n - 1))){
            return getSmallestString(n - 1, n - 1) + strval(k - (n - 1));
        }
        else if(k <= 26 && n == 1){
            return strval(k);
        }
        else if((k <= 26) && (n > 1)){
            string temp(n-1, 'a');
            temp += strval(k - (n - 1));
            //cout << "from this" << endl;
            return temp;
        }
    
        return "";
    }
};


int main(){
    // int k = 3;
    // string temp(3, 'a');
    // temp += "shu";
    // cout << temp << endl;
    Solution st;
    int n = 34;
    int k = 34;
    cout << st.getSmallestString(n, k) << endl;
    //cout << st.strval(15) << endl;

}