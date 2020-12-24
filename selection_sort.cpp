// selection sort: swapping
// O(n2) time complexity

#include <iostream>
#include <algorithm>

using namespace std;

int *selection_sort(int arr[10]){
    for(int i = 0; i < 10 - 1; i++){
        for(int j = i+1; j < 10; j++){
            if(arr[i] > arr[j]){      //sorting in ascending order
                int temp = arr[j]; //swapping
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    return arr;
}

int main(){
    int arr[10] = {2,5,1,90,534,12,1,34,988,545};
    int *ptr = selection_sort(arr);
    for(int i = 0; i < 10; i++){
        cout << ptr[i] << " ";
    }
    cout << endl;
}