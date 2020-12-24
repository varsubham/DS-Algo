#include <iostream>
#include <queue>
#define SPACE 10
using namespace std;

class Node{
    public:
        Node *left;
        Node *right;
        int value;
        Node(){
            left = right = NULL;
            value = 0;
        }
        Node(int value){
            this->value = value;
            left = right = NULL;
        }
};


class BST{
    public:
        Node *root;
        BST(){
            root = NULL;
        }
        bool isEmpty(){
            if(root == NULL)
                return true;
            else
                return false;
        }
        void insertNode(Node *node){
            if(isEmpty())
                root = node;
            else{
                Node *traversal = root;
                while(traversal != NULL){
                    if(node->value < traversal->value && traversal->left == NULL){
                        traversal->left = node;
                        break;
                    }
                    else if(node->value < traversal->value)
                        traversal = traversal->left;
                    else if(node->value > traversal->value && traversal->right == NULL){
                        traversal->right = node;
                        break;
                    }
                    else if(node->value > traversal->value)
                        traversal = traversal->right;
                }
            }
        }
        void print2D(Node *node, int space){
            if(node == NULL)
                return;
            space += SPACE;
            print2D(node->right, space);
            cout << endl;
            for(int i = SPACE; i < space; i++){
                cout << " ";
            }
            cout << node->value << "\n";
            print2D(node->left, space);
        }
        void inorder(Node *node){   // left, root, right
            Node *traversal = node;
            if(traversal == NULL){
                
            }
            else{
                inorder(traversal->left);
                cout << traversal->value << " ";
                inorder(traversal->right);
            }
        }
        void preorder(Node *node){ // node, left, right
            Node *traversal = node;
            if(traversal == NULL){
                
            }
            else{
                cout << traversal->value << " ";
                preorder(traversal->left);
                preorder(traversal->right);
            }
        }
        void postorder(Node *node){
            Node *traversal = node;
            if(traversal == NULL){}
            else{
                postorder(traversal->left);
                postorder(traversal->right);
                cout << traversal->value << " ";
            }
        }
        void breadthfirst(Node *root){
            queue<Node*> qt;
            qt.push(root); int count = 0;
            while(!qt.empty())
            {
                Node *temp = qt.front();
                cout << temp->value << " ";
                count ++;
                qt.pop();
                if(temp->left != NULL)
                    qt.push(temp->left);
                if(temp->right != NULL)
                    qt.push(temp->right);
            }
            cout << endl << count << endl;
        }
        int maxDepth(Node *root){
            if(root == NULL)
                return 0;
            else{
                int leftDepth = maxDepth(root->left);
                int rightDepth = maxDepth(root->right);
                return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
            }
        }
};

int main(){
    BST obj;
    Node *n1 = new Node();  //dynamic memory or the heap memory
    Node *n2 = new Node();
    Node *n3 = new Node();
    Node *n4 = new Node();
    Node *n5 = new Node();
    Node *n6 = new Node();
    Node *n7 = new Node();
    Node *n8 = new Node();
    Node *n9 = new Node();
    Node *n10 = new Node();
    Node *n11 = new Node();
    Node *n12 = new Node();
    Node *n13 = new Node();
    Node *n14 = new Node();
    Node *n15 = new Node();
    n1->value = 34;
    n2->value = 98;
    n3->value = 8;
    n4->value = 10;
    n5->value = 0;
    n6->value = -5;
    n7->value = 100;
    n8->value = 96;
    n9->value = 1;
    n10->value = 7;
    n11->value = 110;
    n12->value = 35;
    n13->value = 77;
    n14->value = 61;
    n15->value = 67;
    obj.insertNode(n1);
    obj.insertNode(n2);
    obj.insertNode(n3);
    obj.insertNode(n4);
    obj.insertNode(n5);
    obj.insertNode(n6);
    obj.insertNode(n7);
    obj.insertNode(n8);
    obj.insertNode(n9);
    obj.insertNode(n10);
    obj.insertNode(n11);
    obj.insertNode(n12);
    obj.insertNode(n13);
    obj.insertNode(n14);
    obj.insertNode(n15);
    //obj.print2D(obj.root, 2);
    obj.breadthfirst(obj.root);
    cout << obj.maxDepth(obj.root) << endl;
    //cout << obj.maxDepth(obj.root) << endl;
    //obj.breadthfirst(obj.root);
    //obj.postorder(obj.root);
}