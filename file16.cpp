#include <iostream>
#include <vector>
using namespace std;

class Queue{
    private:
        int front;
        vector<int> queue;
    public:
        Queue(){
            front = -1;
        }
        bool isEmpty(){
            if(queue.size() == 0)
                return true;
            else return false;
        }
        void enqueue(int value){
            queue.push_back(value);
            front++; 
        }
};  