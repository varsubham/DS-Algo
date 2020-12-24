// function template

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T foo(T a, T b){
    return a + b;
}

int main(){
    
    float a = 2.3;
    float b = 5.4;
    int x = 23;
    int y = 21;
    cout << foo<int>(x, y) << endl;
    cout << foo<float>(a, b) << endl;
}