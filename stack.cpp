#include <iostream>
#include <vector>

// FILO (first in last out)

template <typename T>
class Stack{
    private:
        int pointer;
        std::vector<T> vect;
    public:
        Stack(){
            vect = {}; //Initializing empty vector
            this->pointer = -1;
        }
        bool isEmpty(){
            if(this->pointer == -1)
                return true;
            else
                return false;
        }
        void push(T element){
            this->vect.push_back(element);
            this->pointer++;
        }
        T pop(){
            if(!this->isEmpty()){
                T temp = this->vect[this->pointer];
                this->vect.pop_back();
                this->pointer--;
                return temp;
            }
            else{
                std::cout << "No element in vector " << std::endl;
                return -1;  //return -1 if no element and popped
            }
        }
        T peek(){
            if(!isEmpty())
                return this->vect[this->pointer];
            else
                std::cout << "No element in vector " << std::endl;
                return -1;  // return -1 if no element
        }
        void display(){
            for(int index = this->vect.size() -1 ; index >= 0; index--){
                std::cout << this->vect[index] << std::endl; 
            }
        }
};
int main(){
    Stack<int> st;
    st.push(12);
    st.push(23);
    std::cout << st.pop() << std::endl;;
    st.push(98);
    st.display();
}