#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, int> rand;
    rand[1] = 23;
    if(!rand[1])
        rand[1] = 54;
    cout << rand[1] << endl;
}