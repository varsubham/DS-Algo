// bubble sort where adjacent elements are swapped accordingly
// Time complexity O(n) in worse case

#include <iostream>

using namespace std;


int *bubble_sort(int arr[10]){
    for(int i = 9; i > 0; i--){
        int count = 0;
        for(int j = 0; j < i; j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                count++;
            }
        }
        if(count == 0)   // for optimizing bubble sort 😉
            return arr;
        for(int i = 0; i < 10; i++)
            cout << arr[i] << " ";   // printing after every adjacent swap
            cout << endl;
    }
    return arr;
}

int main(){
    int arr[10] = {2,1,876,23,12,65,2,0,98,96};
    int arr2[10] = {0,1,2,2,12,23,65,96,98,9238};
    bubble_sort(arr);
    int *ptr = bubble_sort(arr2);
    // for(int i = 0; i < 10; i++){
    //     cout << *(ptr+i) << " ";
    // }
    // cout << endl;
}