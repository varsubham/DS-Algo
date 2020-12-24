#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void print_pair(pair<char, int> &pt){
    cout << pt.first << "--->" << pt.second << endl;
}

int main(){
    vector<int> vt(6);
    cout << vt.size() << endl;
    vt.push_back(23);
    cout << vt[0] << endl;
    vt.push_back(23), vt.push_back(54);vt.push_back(76);vt.push_back(87);vt.push_back(12);
    for(auto i : vt){
        cout << i << " ";
    }
    cout << endl;
    // //{23, 76, 87, 12}
    // cout << vt.size() << endl;
    // vt.insert(vt.begin() + 1, 90); 
    // cout << vt.size() << endl;
    // vt.insert(vt.begin() + 1, 100);
    // cout << vt.size() << endl;
    // vt.insert(vt.begin() + 1, 500);
    // cout << &(vt[1]) << endl;
    
} 