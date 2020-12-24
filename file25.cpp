#include <iostream>

using namespace std;

int main(){
    int arr[10] = {34,5,23,6,87,224,65,34,32,98};
    for(int i = 0; i<5; i++){
        arr[i] = 900;
    }
    for(int i = 0 ; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}