#include <iostream>

using namespace std;

int countCoPrime(int arr[], int n)
	{
	    int count = 0;
	    for(int i = 0; i < n - 1; i++){
	        int min = arr[i] < arr[i+1] ? arr[i] : arr[i+1];
	        int max = arr[i] > arr[i+1] ? arr[i] : arr[i+1];
	        for(int j = min ; j > 1 ; j--){
	            if(min%j == 0 && max%j == 0){
	                count ++;
	                break;
	            }
	        }
	    }
	    return count;
	}

int main(){
    int arr[] = {534221, 511317, 899107, 510827, 642040, 289410, 837233, 603160, 879255};
    int max = arr[0];
    for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
        if(arr[i]>max) max = arr[i];
    }
    int a[] = {5,10,20};
    cout << countCoPrime(a, 3) << endl;
}