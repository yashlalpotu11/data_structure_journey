/*
Q) Find the node with minimum value in a Binary Search Tree

Approach: This is quite simple. Just traverse the node from root to left 
recursively until left is NULL. The node whose left is NULL is the node 
with minimum value. 
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

int minVal(Node *root){

    Node* current = root;

    while(current->left != NULL){
        current = current->left;
    }
    return current->data;
}

Node* newNode(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {

	Node *root = newNode(20);
    root->left = newNode(8);
    root->right = newNode(22);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);

    cout << "Minimun value in BST : "<<minVal(root)<<endl;
}

//Time Complexity: O(n) Worst case happens for left skewed trees