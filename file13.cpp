#include <iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	while(test_case--){
	    int n, q;
	    cin >> n >> q;
	    int arr[n][n];
        //initialize array with 0
	        for(int i = 0; i<n ;i++){
	            for(int j = 0; j < n; j++){
	                arr[i][j] = 0;
	            }
	        }
	    while(q--){
	        int query[4];
	        for(int i = 0 ; i < 4; i++){
	            cin >> query[i];
	        }
	        
	        for(int i = query[0]; i <= query[2]; i++){
	            for(int j = query[1]; j <= query[3]; j++){
	                arr[i][j] += 1;
	            }
	        }
	    }
        for(int i = 0; i<n ;i++){
	            for(int j = 0; j < n; j++){
	                cout << arr[i][j] << " ";
	            }
	            cout << endl;
	        }
	}
	return 0;
}