// prime

#include <iostream>

using namespace std;

// int main(){
//     int k = 54;
//     for(int i = 2; i < k; i++){
//         if(k % i == 0){
//             cout << "not prime" << endl;
//             break;
//         }
//     }
//     cout << "yes prime" << endl;
// }

int main(){
    int a = 5;
    int b = 20;
    
    for(int i = a; i <= b; i++){
        int count = 0;
        for(int j = 2; j < i; j++){
            
            if(i % j == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            cout << i << endl;
        }
    }
}