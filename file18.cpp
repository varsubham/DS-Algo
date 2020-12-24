#include <iostream>
using namespace std;

class shubham{
    public:
        int x = 43;

};
void changeobj(shubham &obj){
    obj.x =53423;
}
int main(){
    // int x=34;
    // int *pointer = &x;
    // int **pp = &pointer;
    // //auto pp = addressof(x);
    // cout << pp << endl;
    int x = 54;
    int *pointer = &x;
    int j = *pointer;
    shubham obj;
    changeobj(obj);
    cout << j << endl;
}