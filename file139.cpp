// class template- member variable can have generic datatype

#include <iostream>

using namespace std;

template <typename T>
class Solution{
    T kg;
    public:
        
        T addthing(T a, T b){
            return a+b;
        }
};

int main(){
    // while creating object for class we have to pass in the datatype
    Solution<int> st;
    int a = 23;
    int b = 89;
    cout << st.addthing(a, b) << endl;
}