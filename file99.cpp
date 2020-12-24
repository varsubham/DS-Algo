// pass by reference and sorting the array

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void sortingthing(vector<int> &arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {23,4,6,32,1,23,7};
    sortingthing(arr);
}