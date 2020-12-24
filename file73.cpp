#include <iostream>
#include <cmath>

using namespace std;

int shubham(){
    int k = 23;
    return k;
}
void another(int shubham()){
    int x = shubham();
    cout << x << endl;
}

int main(){
    another(shubham);
    
}