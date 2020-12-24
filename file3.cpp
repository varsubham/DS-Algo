#include <iostream>
#include <string>
using namespace std;
void update1(int *pointer){
    // int kk =23;
    // std::cout << typeid(kk) << std::endl;
}
int main() {
	int n;
	cin >> n;
    int arr[n];
	while(n != 0){
	    string temp;
	    cin >> temp;
	    int count = 0;
	    for(int i = 0; i < temp.size(); i++){
	        if((int)temp[i] >= 65 && (int)temp[i] <= 90){
	            count++;
	        }
	    }
        arr[n-1] = count;
	    n--;
	}
    // cout << n <<endl;
	for(int i = sizeof(arr)/sizeof(arr[0]) - 1 ; i >= 0; i--){
        cout << arr[i] <<endl;
    }
}