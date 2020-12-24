#include <iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node *next_node;
        Node(){
            key = data = 0;
            next_node = NULL;
        }
        Node(int data, int key){
            this->data = data;
            this->key = key;
        }
};

class LinkedList{
    public:
        Node *head;
    LinkedList(){
        head = NULL;
    }
    LinkedList(Node *node){
        head = node;
    }
    // check if a node exists using key value
    Node *nodeExists(int k){
        Node *traversal = head;
        while(traversal != NULL){
            if((*traversal).key == k){
                return traversal;
            }
            traversal = (*traversal).next_node;
        }
        return traversal;
    }
    // Append a node;
    void appendNode(Node *node){
        if(nodeExists(node->key) != NULL)
            cout << "Node Already exists please enter another node" << endl;
        else{
            if(head == NULL){
                head = node;
                cout << "New Node Appended " << endl;
            } 
            else{
                Node *traversal = head;
                while(traversal->next_node != NULL){
                    traversal = traversal->next_node;
                }
                traversal->next_node = node;
                cout << "New Node Appended" << endl;
            }
        }
    }
    // Prepend a node;
    void prependNode(Node *node){
        if(nodeExists(node->key) != NULL)
            cout << "Node Already exists please enter another node" << endl;
        else{
            node->next_node = head;
            head = node;
            cout << "New Node Prepended" << endl;
        }
    }
    // Insert a node in between
    void insertAt(Node *node, int key){
        Node *traversal = nodeExists(key);
        if(traversal == NULL)
            cout << "No Node exist with key value K" << endl;
        else{
            if(nodeExists(node->key) != NULL)
                cout << "Node Already exists please enter another node" << endl;
            else if(head == NULL)
                cout << "Linked List is Empty" << endl;
            else{
                node->next_node = traversal->next_node;
                traversal->next_node = node;
            }
        }
    }
    // Delete Node by unique key
    void deleteNodeByKey(int key){
        //Node *traversal = nodeExists(key);
        if(head == NULL)
            cout << "LinkedList is Empty" << endl;
        else if(head != NULL){
            if(head->key == key){
                head = head->next_node;
            }
            else if(nodeExists(key) == NULL)
                cout << "No Node exist with key value " << key << endl;
            else{
                Node *traversal = head;
                while(traversal->next_node->key != key){
                    traversal = traversal->next_node;
                }
                traversal->next_node = traversal->next_node->next_node;
            }
        }
    }
    // Printing out the entire Linked list
    void printList(){
        Node *traversal = head;
        while(traversal != NULL){
            cout << "Key: " << traversal->key << "\n" << "Data: " << traversal->data << "\n";
            traversal = traversal->next_node;
        }
    }
};
int main(){
    LinkedList lt;
    Node *n1 = new Node();
    Node *n2 = new Node();
    Node *n3 = new Node();
    n1->data = 23;
    n1->key = 1;
    n2->data = 100;
    n2->key = 2;
    n3->data = 54;
    n3->key = 3;
    lt.appendNode(n1);
    lt.appendNode(n2);
    lt.appendNode(n3);
    lt.deleteNodeByKey(23);
    lt.printList();
    //lt.appendNode(&n2);
    //cout << lt.head << endl;


}