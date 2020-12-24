#include <iostream>
#include <string>
using namespace std;

// int x = 234;

// void somefunc(int x){
//     x += 10;
// }
// void do_something(...);
// void do_something(){
//     cout << "Hello There" << endl;
// }
//const int  a = 34;
class shubham{
    
    public:
        int x, y;
        friend shubham add(shubham a, shubham b){
            shubham newobj;
            newobj.x = a.x + b.x;
            newobj.y = a.y + b.y;
            return newobj;
        }
};

int main(){
    shubham obj1, obj2, obj3;
    //int *ptr = &obj1.x;
    obj1.x = 10;obj1.y = 20;obj2.x = 30;obj2.y = 50;
    obj3 = add(obj1, obj2);
    cout << obj3.x << endl << obj3.y << endl;

}
