
/* Using stack (without recursion) */

/*
Approach:

1) Create an empty stack S.
2) Initialize current node as root
3) Push the current node to S and set current = current->left until current is NULL
4) If current is NULL and stack is not empty then 
     a) Pop the top item from stack.
     b) Print the popped item, set current = popped_item->right 
     c) Go to step 3.
5) If current is NULL and stack is empty then we are done.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
    // Node(int d){
    //     data = d;
    //     left = right = NULL;
    // }
};

void inOrder(Node *root){

    stack<Node*> s;
    Node *curr = root;

    while(curr != NULL || s.empty()==false){
        //Reach the left most node of the curr node
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }

        //current must be null at this point
        curr = s.top();
        s.pop();

        cout<<curr->data<<" ";

        //we have visited the node and its left subarray
        //now move to the right subarray
        curr = curr->right;
    }
}

Node* newNode(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {
	Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    inOrder(root);
}

//Time Complexity: O(n)