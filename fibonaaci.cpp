//using recursion and map to find fibonaaci.. very fast

#include <iostream>
#include <map>
#include <cmath>
using namespace std;
map<int, unsigned long long int> fib;
int fibonaaci(int n){
    if(n == 1 || n == 2){
        return 1;
    }
    else {
        //int temp = fibonaaci(n-1) + fibonaaci(n-2);
        if(!fib[n]){
            fib[n] = fibonaaci(n-1) + fibonaaci(n-2);
            return fib[n];
            }
        else 
            return fib[n];
           //return fibonaaci(n-1) + fibonaaci(n-2);
    }
        
}

int main(){
    int n = 100;
    for(int i = 1; i <= n; i++){
        cout << fibonaaci(i) << " ";
    }
    cout << endl << endl;;

    // map<int, unsigned long long int>::iterator itr = fib.begin();
    // for(; itr != fib.end(); itr++){
    //     cout << itr->first << " " << itr->second << endl;
    // }
    //cout << fibonaaci(n) << endl;;
}