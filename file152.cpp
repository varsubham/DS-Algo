// Friendly function

#include <iostream>

using namespace std;
class B;
class A{
    int x;
    public:
        A(){
            this->x = 10;
        }
        int foo(){
            return x;
        }
        friend int maxi(A y, B z);
        
};
class B{
    int x;
    public:
        B(){
            this->x = 20;
        }
        int foo(){
            return x;
        }
        friend int maxi(A y, B z);
};

int maxi(A y, B z){
    return y.x + z.x;
}
int main(){
    A a;
    B b;
    cout << a.foo() + b.foo() << endl;
    //cout << maxi(a, b) << endl;
}