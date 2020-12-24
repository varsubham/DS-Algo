#include <iostream>
using namespace std;

//template <typename T>
class Queue{
    private:
        int front;
        int rear;
        int queue[5];
    public:
        Queue(){
            //queue = new int[size];        //dynamic memory allocation
            for(int i = 0; i < 5; i++)
                queue[i] = 0;
            rear = front = -1;
        }
        bool isEmpty(){
            if(rear == -1 && front == -1)
                return true;
            else return false;
        }
        bool isFull(){
            if(rear == 4)
                return true;
            else return false;
        }
        void enqueue(int value){
            if(isFull())
                return;
            else if(isEmpty()){
                rear = front = 0;
                queue[rear] = value;
            }
            else
                queue[++rear] = value;
        }
        int dequeue(){
            int x;
            if(isEmpty())
                return -1;
            else if(rear == front){
                x = queue[front];
                queue[rear] = 0;
                rear = front = -1;
            }
            else{
                x = queue[front];
                queue[front] = 0;
                front++;
            }
            return x;
        }
        int count(){
            if(isEmpty()){
                return 0;
            }
            else 
                return rear - front + 1;
        }

};
int main(){
    Queue qt;
    qt.enqueue(34);
    qt.enqueue(23);
    qt.enqueue(12);
    cout << qt.dequeue() << endl;
    cout << qt.isFull() << endl;
}