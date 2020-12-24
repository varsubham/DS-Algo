#include <iostream>
#include <vector>
using namespace std;
int main(){
    int *arr = new int[5];
    int arr2[5];

    for(int i = 0; i<5; i++){
        arr[i] = 5-i;
    }
    for(int i = 0; i<5; i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;
    
}