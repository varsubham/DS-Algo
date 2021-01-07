// find the smallest length subarray of sum S
// not complete

#include <iostream>
#include <vector>

using namespace std;


int mlength = 0;
int minlength(vector<int> vt, int rem_sum, int index){
    //
    if(rem_sum == 0){
        return mlength;
    }
    for(; index < vt.size(); index++){
        if(vt[index] <= rem_sum){
            rem_sum -= vt[index];
            mlength++;
        }
    }

}

int main(){
    vector<int> vt = {3, 1, 4, 2};
}