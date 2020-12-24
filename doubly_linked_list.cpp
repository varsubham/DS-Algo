#include <iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node *next_node;
        Node *prev_node;
        Node(){
            key = data = 0;
            next_node = prev_node = NULL;
        }
        Node(int key, int data){
            this->key = key;
            this->data = data;
        }
};

class DoublyLinkedList{
    public:
        Node *head;
        DoublyLinkedList(){
            head = NULL;
        }
        DoublyLinkedList(Node *node){
            head = node;
        }
        // check if node exists using key value;
        Node *nodeExist(int key){
            Node *traversal = head;
            while(traversal != NULL){
                if(traversal->key == key)
                    return traversal;
                traversal = traversal->next_node;
                }
            return traversal;
        }
        // Append a node to the list;
        void appendNode(Node *node){
            if(nodeExist(node->key) != NULL){
                cout << "Node already exists in the list " << endl;
            }
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
                    node->prev_node = traversal;
                    cout << "New Node Appended" << endl;
                }
            }
        }
        //Prepend Node to the list
        void prependNode(Node *node){
            if(nodeExist(node->key) != NULL)
                cout << "Node already exists in the list " << endl;
            else{
                if(head == NULL){
                    head = node;
                    cout << "New Node prepended" << endl;
                }
                else{
                   head->prev_node = node;
                   node->next_node = head;
                   head = node;
                   cout << "New node prepended " << endl;
                    
                }
            }
        }
        //Insert a node after a given key
        void insert(Node *node, int key){
            Node *traversal = nodeExist(node->key);
            if(nodeExist(key) == NULL){
                cout << "Node with give key is not Present " << endl;
            }
            else {
                if(traversal != NULL)
                    cout << "Node already exists" << endl;
                else{
                    Node *temp = traversal->next_node;
                    if(temp == NULL){
                        traversal->next_node = node;
                        node->prev_node = traversal;
                        cout << "Node inserted" << endl;
                    }
                    else{
                        node->next_node = temp;
                        temp->prev_node = node;
                        node->prev_node = traversal;
                        traversal->next_node = node;
                    }
                }
            }

        }
};
int main(){
   
    return 0;
}