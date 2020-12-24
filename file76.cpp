#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main(){
    map<int, int> um;
    um[1] = 534;
    um[1] = 2;
    cout << um[1] << endl;
}