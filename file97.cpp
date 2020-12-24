// bitwise operations

#include <iostream>

using namespace std;


int main(){
    int x = 35;
    int z = x & (1 << 4);
    cout << z << endl;
    for(int i = 16; i >= 0; i--){
        if((x & (1 << i)) != 0){
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        
    }
    cout << endl;
}