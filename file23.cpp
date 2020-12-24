#include <iostream>
using namespace std;

class shubham{
    public:
        void show(){
            cout << "from shubham" << endl;
        }
};

class jack : public shubham{
    
};

int main(){ 
    jack obj;
    obj.show();
}