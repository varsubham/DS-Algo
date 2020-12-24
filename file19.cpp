#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    vector<int> vect = {3,34,45,56,34,32};
    // vect.push_back(343423);
    //normal way of iterating
    // for(int i = 0 ; i < vect.size(); i++){
    //     cout << vect[i] << endl;
    // }
    // let use iterators

    vector<int>::iterator it;
    // vect.push_back(343);
    for(it = vect.begin(); it != vect.end(); it++){
        cout << *it << endl;
    }
}