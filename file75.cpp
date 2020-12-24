#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> um;
    um.insert({2,3});
    um.insert({54,44});
    um.insert({3,54});
    um[5] = 432;
    // auto i = um.find(5);
    // if(!um[5]){
    //     cout << "not found " << endl;
    // }
    // else
    // {
    //     cout << "found " << endl;
    // }
    
}