#include <iostream>
#include <string>
using namespace std;
int i = 1;
void printNos(int N)
{
    if(N >= 1){
        cout << i++ << " ";
        printNos(N-1);
    }
}

int main(){
    printNos(2);
    int a = '9';
    cout << a << endl;
    
}