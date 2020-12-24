// sort using STL functions

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vt = {2,5,6,4,2,5,7};
    sort(vt.begin(), vt.end(), [](int &a, int &b){
        if(a < b)
            return true;
        return false;
    });
    auto itr = upper_bound(vt.begin(), vt.end(), 4);
    cout << *itr << endl;
    //cout << vt[0] << endl;
}