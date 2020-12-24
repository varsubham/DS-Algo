#include <iostream>

using namespace std;

int partition(int arr[], int low, int high){
    int pindex = low; int pivot = arr[high];
    for(int i = low; i < high; i++){
        if(arr[i] >= pivot){
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

void quicksort(int arr[], int low, int high){
    if(low < high){
        int mid = partition(arr, low, high);
        quicksort(arr, low, mid-1);
        quicksort(arr, mid+1, high);
    }
}

int main(){
    int arr[10] = {23,12,8,3,1,9,0,4,2,2};
    // int k = partition(arr, 0, 9);
    // cout << k << endl;

    quicksort(arr, 0, 9);
    //cout << arr[0] << endl;
    for(int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
}