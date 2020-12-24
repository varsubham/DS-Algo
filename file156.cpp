// zero quantity maximization codeforces

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr1[i] = temp;
    }
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        arr2[i] = temp;
    }
    
    unordered_map<float, int> um;
    for(int i = 0; i < n; i++){
        if(arr1[i] != 0){
            float d = -1 * (arr2[i] / float(arr1[i]));
            um[d]++;
        }
        else if(arr1[i] == 0 && arr2[i] == 0){
            float d = 0.0;
            um[d]++;
        }
    }
    auto itr = um.begin();
    int max_val = 0;
    for(; itr != um.end(); itr++){
        max_val = max_val < itr->second ? itr->second : max_val;
    }
    cout << max_val << endl;
}