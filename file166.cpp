// Mathematical Expression

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int expression_val(int a, int b, char ch){
    if(ch == '-')
        return a - b;
    else if(ch == '+')
        return a + b;
    else if(ch == '*')
        return a * b;
    return 0;
}

int main(){
    int n;
    cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++){
        cin >> vt[i];
    }
    string symbols;
    cin >> symbols;
    string finalexp = "";
    for(int i = 0; i < n - 1; i++){
        int fir = vt[i];
        int sec = vt[i+1];
        int max_val = -100;
        char temp = symbols[0];
        for(int j = 0; j < symbols.size();j++){
            if(max_val < expression_val(fir, sec, symbols[j])){
                max_val = expression_val(fir, sec, symbols[j]);
                temp = symbols[j];
            }
        }
        finalexp += to_string(fir);
        finalexp.push_back(temp);
        finalexp += to_string(sec);
    }
    cout << finalexp << endl;
}