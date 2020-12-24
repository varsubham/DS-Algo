#include <iostream>

using namespace std;

void merge(int arr[], int left, int middle, int right){
    int temp[10]; int i,j,k;
    i = left; j = middle + 1; k = left;
    while(i <= middle && j <= right){
        if(arr[j] <= arr[i]){
            temp[k] = arr[j];
            k++; j++;
        }
        else if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++; i++;
        }
    }
    while(i <= middle){
        temp[k] = arr[i];
        k++; i++;
    }
    while(j <= right){
        temp[k] = arr[j];
        k++; j++;
    }
    for(int p = left; p <= right; p++){
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int middle = (left + right)/2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle+1, right);
        merge(arr, left, middle, right);
    }
}

int main(){
    int arr[10] = {2,5,23,12,776,21,32,56,43,98};
    mergeSort(arr, 0, 9);
    //cout << arr[0];
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}