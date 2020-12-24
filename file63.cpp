#include <iostream>
#include <vector>
#include <string>
using namespace std;

void hashfunc(string val){
    string finalstring = "";
    for(int i = 0; i < val.size(); i++){
        int ch = (int(val[i]) + 15) % 10;
        cout << ch << endl;
        string t1(1,ch);
        // string temp = to_string(t1);
        //finalstring.push_back(t1);

    }
    cout << finalstring << endl;
    // int temp = stoi(finalstring);

    // return temp%100000;
}

int main(){
    string st = "1256";
    string temp = "";
    for(char ch : st){
        temp.push_back(ch);
    }
    cout << temp << endl;
    // int k = stoi(st);
    // cout << k << endl;
    // cout << hashfunc("shub") << endl;
    // hashfunc("shubham");
}