#include <iostream>

using namespace std;

int partition(int arr[], int low, int high){
    int pindex = low; int pivot = arr[high];
    for(int i = low; i < high; i++){
        if(arr[i] < pivot){
            int temp = arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex ++;
        }
    }
    int temp = arr[high];
    arr[high] = arr[pindex];
    arr[pindex] = temp;
    return pindex;
}

int main(){
    int arr[10] = {9,1,5,6,3,0,54,34,515,2};
    int k = partition(arr, 0, 9);
    cout << k << endl;
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}