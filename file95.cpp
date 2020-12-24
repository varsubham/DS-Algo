// bitwise shift operation
// left shift using x<<k (where k is the amount by which we are shifting)
// similarly right shift also

#include <iostream>

using namespace std;

int main(){
    int x = 23;
    int z = x << 2;           // this is nothing but 23 * pow(2, 2);
    int a = 1;
    int b = a << 4;           // very easy to represent power to 2 using bitwise shifting by whatever k(power of 2)
    cout << b << endl;
}