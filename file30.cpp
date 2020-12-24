#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int jumpingOnClouds(vector<int> c) {
    int total_count = 0;
    for(int i = 0; i < c.size();){
        if(c[i+2] == 0){
            total_count += 1;
            i += 2;
            if(i == c.size() - 1)
                break;
        }
        else if(c[i+1] == 0){
            total_count += 1;
            i += 1;
            if(i == c.size() - 1)
                break;
        }
    }
    
    return total_count;
}

int main(){
    // map<int, int> mp;
    // vector<int> arr = {10,20,20,10,10,30,50,10,20};
    // int k = arr.size();
    // for(int i : arr){
    //     mp[i]++;
    // }
    // auto itr = mp.begin();
    // for(; itr != mp.end(); itr++){
    //     cout << itr->first  << " " << itr->second<< " ";
    // }
    // cout << endl;
    cout << jumpingOnClouds({0,0,1,0,0,1,0});

}