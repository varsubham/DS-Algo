// find the second largest element in a given array;
// given all unique elements

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    vector<int> vt = {1,54,54,23,1, 0, -2,-3};
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i : vt){
        if(i > max1){
            max2 = max1;
            max1 = i;
        }
        else if(i > max2){
            max2 = i;
        }
    }
    cout << max1 << endl;
    cout << max2 << endl;
}