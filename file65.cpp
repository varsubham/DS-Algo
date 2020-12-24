#include <iostream>
#include <cmath>
using namespace std;


// how we use to do multiplication in schools
// Time complexity here is O(n^2)
int multipy(int &x, int &y){
    int min_num = min(x, y);
    int max_num = max(x, y);
    int d = 0; int mult = 0; int count = 0;
    while(min_num != 0){           // x = 1235       y = 9834;
        int d = min_num % 10;
        mult = mult + ((max_num * d) * pow(10, count));
        count++;
        min_num /= 10;
    }
    return mult;
}

int main(){
    int x = 1234;
    int y = 1234;
    cout << multipy(x, y) << endl;
}