#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num == 1) return false;
    for(int i = 2; i < num; i++){
        if(num % i == 0)
            return false;
    }
    return true;
}

int next_prime_num(int num, int direction){
    int next_num = direction == 1 ? num+1 : num-1;
    while(true){
        if(isPrime(next_num))
            return next_num;
        next_num = direction == 1 ? next_num + 1 : next_num - 1;
    }
}
int main() {
	int test_case;
	cin >> test_case;
	while(test_case--){
	    int num;
	    cin >> num;
        int next_num = next_prime_num(num, -1);
	    while(true){
            //cout << next_num << endl;
	        if(isPrime(num - next_num) && isPrime(next_num)){
	            cout << num-next_num << " " << next_num << endl;
	            break;
	        }
	        next_num--;
	    }
	}
	return 0;
}