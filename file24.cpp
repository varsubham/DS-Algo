#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> vect = {2,3,4,5,6,8};
    if(binary_search(vect.begin(), vect.end(), 3))
        cout << "present"<< endl;
    else 
        cout << "not present " << endl;
}