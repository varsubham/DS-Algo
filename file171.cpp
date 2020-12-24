#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string ArrayChallenge(int arr[], int arrLength){
    unordered_map<int, int> um;
    for(int i = 0; i < arrLength; i++){
        um[arr[i]]++;
        if(um[arr[i]] >= 4){
            return "false";
        }
    }
    return "true";
}

int main(){
    int arr[6] = {2,2,3,4,2};
    cout << ArrayChallenge(arr, 6) << endl;
}