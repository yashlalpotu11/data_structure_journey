/*
Q) Size of a tree is the number of elements present in the tree.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

int size(Node *root){
    if(root == NULL){
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
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

    cout<<"Size of tree : "<<size(root)<<endl;
}

//Time complexity : O(n)
