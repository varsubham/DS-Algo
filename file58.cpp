#include <iostream>
using namespace std;
class Node{
    public:
        int key;
        Node *left;
        Node *right;
        Node(){
            key = 0;
            left = right = NULL;
        }
        Node(int key){
            this->key = key;
            left = right = NULL;
        }
};

class BST{
    public:
        Node *root;
        bool isEmpty(){
            return root == NULL ? true : false;
        }
        void insertNode(Node *node){
            Node *traversal = root;
            while(traversal != NULL){
                if(traversal->key > node->key){
                    traversal = traversal->right;
                }
                else if(traversal->key < node->key){
                    traversal = traversal->left;
                }
                else{
                    cout << "Identical Node not allowed" << endl;
                    break;
                }
            }
            traversal = node;
        }

};

int main(){
    BST obj;
    obj.isEmpty();
}