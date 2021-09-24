
/*
Write a program to Delete a Tree

Note : for yraversal we'll use postorder traversal,
beacause we can delete childrens before parent.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

void _deleteTree(Node *node){
    if(node == NULL){
        return;
    }

    //first delete both subtrees
    _deleteTree(node->left);
    _deleteTree(node->right);

    //then delete this node
    cout<<"Deleting Node: "<<node->data<<endl;
    delete node;
}

//delete the tree and set root as NULL
void deleteTree(Node **node_ref){
    _deleteTree(*node_ref);
    *node_ref = NULL;
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

    deleteTree(&root);
    cout<<"Tree deleted"<<endl;
}