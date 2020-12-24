#include <iostream>

using namespace std;

int *insertion_sort(int arr[10]){
    for(int i = 0; i < 10 - 1; i++){
        int temp = arr[i+1];int j = i;
        for(; j >= 0 && temp < arr[j]; j--){   //shifting 
                arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
    return arr;
}

int main(){
    int arr[10] = {22,454,12,1,65,23,9,34,231,0};
    int *ptr = insertion_sort(arr);

    for(int i = 0; i < 10; i++)
        cout << *(ptr+i) << " ";
        cout << endl;
}