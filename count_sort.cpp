#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> v1 = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    vector<int> count(10);
    for(int i = 0; i < v1.size(); i++){
        count[v1[i]]++;
    }
    for(int i = 1; i < count.size(); i++){
        count[i] = count[i-1] + count[i];
    }
    // for(int i : count)
    //     cout << i << " ";
    // cout << endl;


    vector<int> sorted_arr(v1.size());
    for(int i = v1.size() - 1; i >= 0; i--){
        count[v1[i]]--;
        sorted_arr[count[v1[i]]] = v1[i];
    }
    for(int i : sorted_arr)
        cout << i << " ";
    cout << endl;
    // for(int i = 0; i < count.size(); i++){
    //     if(count[i] != 0){
    //         int temp = count[i];
    //         for(int j = 0; j < temp; j++)
    //             sorted_arr.push_back(i);
    //     }
    // }
    // for(int j : sorted_arr)
    //     cout << j << " ";
    // cout << endl;
}