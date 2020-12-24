// validate binary search tree

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Node{
    public:
        int val;
        Node *left;
        Node *right;
        Node(){
            this->val = 0;
            this->left = this->right = NULL;
        }
        Node(int val){
            this->val = val;
            this->left = this->right = NULL;
        }
};
class BinarySearchTree{
    public:
        Node *root;
        BinarySearchTree(){
            this->root = NULL;
        }
        bool isEmpty(){
            return this->root == NULL ? true : false;
        }
        void insert(Node *n){
            // if the tree is empty
            if(isEmpty()){
                this->root = n;
            }
            
            else{
                // otherwise
                Node *traversal = this->root;
                while(traversal != NULL){
                    // left and null found
                    if((traversal->val > n->val) && (traversal->left == NULL)){
                        traversal->left = n;
                        break;
                    }
                    // left 
                    else if(traversal->val > n->val){
                        traversal = traversal->left;
                    }
                    // right and null found
                    else if((traversal->val < n->val) && (traversal->right == NULL)){
                        traversal->right = n;
                        break;
                    } 
                    else if(traversal->val < n->val){
                        traversal = traversal->right;
                    }
                }
            }
        }
        vector<int> vt;
        bool isValid(Node *root){
            if(root == NULL){

            }
            else{
                isValid(root->left);
                if(vt.size() == 0){
                    vt.push_back(root->val);
                }
                else if(vt[vt.size() - 1] < root->val){
                    vt.push_back(root->val);
                }
                else
                    return false;
                isValid(root->right);
            }
            return true;
        }
};

int main(){
    BinarySearchTree bst;
    Node *n1 = new Node(2);
    Node *n2 = new Node(3);
    Node *n3 = new Node(1);
    Node *n4 = new Node(6);
    Node *n5 = new Node(0);
    bst.insert(n1);
    bst.insert(n2);
    bst.insert(n3);
    bst.insert(n4);
    bst.insert(n5);
    cout << bst.isValid(bst.root) << endl;
    int x = 34;
    long long int y = 31;
    x = y;
}
