// oops concepts

#include <iostream>
using namespace std;
//int x;
class A{
public:
    static int x;
    int k = 34;
    // A(){
    //     x++;
    // }
    ~A(){
        x--;
    }
    void* operator new(size_t sz){
        x++;
        void *p = ::new A();
        return p;
    }
    static void func(){
        cout << "alskjfh" << endl;
    }

};
int A::x = 0;
int main(int argc, char* argv[]){
    
    A obj1, obj2, obj3, obj4;
    
    //A *ptr = (A*)malloc(sizeof(A));
    A *obj5 = new A();
    A *obj21 = new A();
    A *obj12 = new A();
    delete obj5; // c++ style of deleting would call destructor also
    bool kh = -23;
    cout << kh << endl;
    cout << A::x << endl;
}