#include <iostream>
#include <string>

using namespace std;
class A{
    public:
        A(){
            cout << "from A" << endl;
        }
};
class B : A{
    public: 
        B(){
            cout << "from B " << endl;
        }
};
int main(){
   B a;
}