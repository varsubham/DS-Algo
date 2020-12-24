// coin change problem using bottom up aproach
// Dynamic programming

#include <iostream>
#include <vector>

using namespace std;

void initializevector(vector<int> &finalvect){
    for(int i = 0; i < finalvect.size(); i++){
        finalvect[i] = INT16_MAX;
    }
}

int coinchange(vector<int> coin, int amount){
    vector<int> finalvect(amount + 1);
    initializevector(finalvect);
    // initializing with 0 in case of 0 coin
    finalvect[0] = 0;
    for(int i = 1; i < finalvect.size(); i++){

        for(int j = 0 ; j < coin.size(); j++){
            int coinden = coin[j];
            if(i >= coinden){
                finalvect[i] = finalvect[i] > finalvect[i - coinden] + 1 ? finalvect[i - coinden] + 1 : finalvect[i];
            }
        }
    }
    return finalvect[amount];
}

int main(){
    vector<int> coin =  {1,3,5};
    cout << coinchange(coin, 14) << endl;
    // vector<int> vt = coinchange(coin, 11);
    // for(int i = 1; i < vt.size(); i++){
    //     cout << i << " --> " << vt[i] << endl;
    // }
}