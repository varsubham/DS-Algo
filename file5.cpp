#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(string str)
		{
		    int temp = 0;
		    for(int i = str.size() - 1 ; i >= 0; i--){
		        temp += (str[i] - '0') * pow(2,(str.size() - 1 - i));
		    }
		    return temp;
		}
int main(){
    cout << binary_to_decimal("000100") << endl;;
    // string k = "23";
    // int k1 = stoi(k);
    // cout << k1 << endl;
    string a = "abc";
    a.append("n");
}