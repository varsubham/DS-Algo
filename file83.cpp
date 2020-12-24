#include <iostream>

using namespace std;
class ALNode{
    public:
    int value;
    ALNode *next;
    ALNode *arbitrary;

    ALNode(int val){
        this->value = val;
        this->next = NULL;
        this->arbitrary = NULL;
    }
    ALNode(){
        this->value = -1;
        this->next = NULL;
        this->arbitrary = NULL;
    }
};
ALNode *deepCopy(ALNode *head) 
{
    // WRITE YOUR CODE HERE
    ALNode *traversal = head;
    ALNode *newALNode;
    while(traversal != NULL){
        ALNode *nextTemp = traversal->next;
        ALNode *arbitraryTemp = traversal->arbitrary;
        newALNode->value = traversal->value;
        newALNode->next = nextTemp;
        newALNode->arbitrary = arbitraryTemp;
        traversal = traversal->next;
    }
    return newALNode;
}

int main(){
    ALNode *head;
    
}