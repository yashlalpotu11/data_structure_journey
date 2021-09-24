
/*
Recursively calculate height of left and right subtrees of a node and 
assign height to the node as max of the heights of two children plus 1.
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

int maxHeight(Node *root){
    if(root == NULL){
        return 0;
    }
    int ldepth = maxHeight(root->left);
    int rdepth = maxHeight(root->right);

    if(ldepth > rdepth){
        return ldepth + 1;
    }
    else{
        return rdepth + 1;
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

    cout<<"Height of tree : "<<maxHeight(root)<<endl;
}