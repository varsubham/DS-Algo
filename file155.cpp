#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> um;
    um[1] = 34;
    auto itr = um.begin();
    itr->second--;
    //um[1]++;
    cout << um[1] << endl;
}