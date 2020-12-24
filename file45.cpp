#include <iostream>
#include <vector>

using namespace std;

void removeDuplicates(vector<int> &vt){
    int current_element = vt[0];

    for(int i = 1; i < vt.size();){
        if(vt[i] == current_element){
            auto itr = vt.begin();
            vt.erase(itr + i + 1);
        }
        else{
            i++;
            current_element = vt[i];
        }
    }
}

int main(){
    vector<int> vt = {1,1,1,1,2,2,3,5,5,6};
    removeDuplicates(vt);
    for(auto i : vt)
        cout << i << " ";
    cout << endl;
}