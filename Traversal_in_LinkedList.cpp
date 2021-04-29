#include<iostream>
using namespace std;

// Iteratively
int Traversal_Iteratively(Node *head ,int data){
    Node *curr = head ;
    int pos = 1;
    while(curr!=NULL){
        if(curr->data == data){
            return pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;

}

// Recursively traversal
int TraversalRecursively(Node *head ,int data){
    // base case.
    if(head == NULL){
        return -1;
    }
    if(head->data == data){
        return 1;
    }
    return TraversalRecursively(head->next) +1 ;
}
