#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void rotateLeft(int d, vector<int> arr) {
    vector<int> rotated_arr(arr.size());
    for(int i = 0; i < arr.size(); i++){
        //int n = arr.size();
        rotated_arr[(arr.size() + i - d) % (arr.size())] = arr[i];
        //rotated_arr[ (n + i - d) % n] = arr[i];

    }
    for(int i = 0; i < rotated_arr.size(); i++)
        cout << rotated_arr[i] << " ";
    cout << endl;
}

int main(){
    // unordered_map<string, int> um;
    // vector<int> count;
    // vector<string> strings = {"ab", "ab", "abc"};
    // for(string wrd : strings){
    //     um[wrd]++;
    // }
    // vector<string> queries = {"ab", "abc", "bc"};
    // for(string qer : queries){
    //     count.push_back(um[qer]);
    // }
    // for(int i : count)
    //     cout << i << " ";
    // cout << endl;

    rotateLeft(2, {1,2,3,4,5});
}