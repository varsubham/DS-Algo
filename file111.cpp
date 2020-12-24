#include <iostream>
#include <vector>

using namespace std;

void printarr(vector<int> vt){
    for(int i = 0; i < vt.size(); i++){
        cout << vt[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> vt = {1,2,3,4,5,6,7,8};
    auto itr = vt.begin();
    for(; itr != vt.end();){
        if((*itr) % 2 != 0){
            vt.erase(itr);
            //itr--;
        }
        else{
            itr++;
        }
    }
    printarr(vt);
}