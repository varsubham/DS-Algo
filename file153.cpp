// inheritance
#include<iostream>
using namespace std;

class A{
    int a;
protected:
    void hello(){
        cout << "Hello world " << endl;
    }
public:
    int b = 23;
    void show(){
        cout << "from class A, b =" << b << endl;
    }

};


class B : public A{
    int b;
public:
    void show(){
        hello();
        cout << "from class B" << endl;
    }
};

int main(){
    B obj;
    A obj2;
    
    obj.show();
}