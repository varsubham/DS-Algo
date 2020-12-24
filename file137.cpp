// dynamic memory allocation

#include <iostream>

using namespace std;

int main(){
    // int arr[5];
    // int size = 0;
    int size;
    cin >> size;
    
    // dynamic memory alllocation for array
    int *arr2 = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < size; i++){
        cout << arr2[i] << endl;
    }
    int *a = new int(15); // dynamic memory allocation for int
    float *b = new float(1.3); // similarly dynamic memory allocation for float
    cout << *a << endl;  // to get the value store at "a"  we use *a

    delete arr2; // this will free the memory

    

}