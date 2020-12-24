#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	while(n--){
	    int size;
	    int d;
	    cin >> size >> d;
	    int arr[size];
	    for(int i = 0; i < size; i++){
	        cin >> arr[i];
	    }
	    int rot_arr[size];int index = 0;
	    for(int i = 0 ; i < size; i++){
	        index = i - (d%size) < 0 ? size + i-(d%size) : i - d%size;
	        rot_arr[index] = arr[i];
	    }
	    for(int i = 0; i < size; i++)
	        cout << rot_arr[i] << " ";
	}
	return 0;
}