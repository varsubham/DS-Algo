#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparefunc(int x, int y){
    return x < y;
}
int main(){
    // C++ STL

    vector<int> vect = {11,23,4,12,8};
    int arr[5] = {34,12,90,1, 90};
    cout << vect[1] << endl;
    sort(vect.begin(), vect.end(), greater<int>()); // O(NlogN)
    for(int i : vect){
        cout << i << " ";
    }
    cout << endl;
    bool ifpresent = binary_search(vect.begin(), vect.end(), 3);   //binary serarch in O(logN)
    // false;
    vect.push_back(52);
    vect.push_back(50);
    vect.push_back(50);
    vect.push_back(50);
    vect.push_back(50);
    sort(vect.begin(), vect.end());
    vector<int>::iterator itr = lower_bound(vect.begin(), vect.end(), 50); // >= using binary serach in O(logN)
    vector<int>::iterator itr2 = upper_bound(vect.begin(), vect.end(), 50); // >
    
    //you can also use auto like;
    auto itr3 = lower_bound(vect.begin(), vect.end(), 23);

    
    for(int i : vect){
        cout << i << " ";
    }
    cout << endl;
    cout << *itr2 << endl;
    cout << (itr2 - itr) << endl; // number of occurence of 100

    sort(vect.begin(), vect.end(), comparefunc);

    for(int i : vect){
        cout << i << " ";
    }
    cout << endl;

    // we can also use iterator to iterate through an array;

    auto itr5 = vect.begin();
    for(; itr5 != vect.end(); itr5++){
        cout << *itr5 << " ";
    }
    cout << endl;
    //cout << &(*(++itr5)) << endl;
    for(auto &k : vect)
        k++;
    for(int i = 0; i < vect.size(); i++)
        cout << vect[i] <<  " ";
    cout << endl;
}