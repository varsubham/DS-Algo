#include <iostream>

using namespace std;

void immediateSmaller(int *arr, int n) {
	    for(int i = 0 ;i<n-1; i++){
	        if(arr[i] > arr[i+1])
	            cout << arr[i+1] << " ";
	        else if(arr[i] < arr[i+1])
	            cout << -1 << " ";
	    }
	    cout << -1 << endl;
	}

int main(){
    int arr[] = {4,2,1,5,3};
    immediateSmaller(arr, 5);
}