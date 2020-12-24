#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[] = {23,5,56,23};

    int *ptr = &size;
    //stack allocation 
    // int arr1[size];
    // dynamic memory allocation
    int *pointer = new int[size];
    cout << "Enter values " << endl;
    for(int i = 0; i < size; i++){
        int temp;
        cin >> temp;
        pointer[i];
    }
    for(int i = 0; i < size; i++){
        cout << *pointer << endl;
    }

}