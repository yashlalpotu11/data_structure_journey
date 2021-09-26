
/*
Given the binary tree and you have to find out the n-th node of inorder traversal.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

void nthNode(Node *root, int n){

    static int cnt = 0;

    if(root == NULL){
        return;
    }

    if(cnt <= n){
        //first recur on left child
        nthNode(root->left, n);
        cnt++;

        //when cnt==n, print the data of node
        if(cnt == n){
            cout << root->data << endl;
        }
        //now recur on right child
        nthNode(root->right, n);
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

    int n = 3;
    nthNode(root, n);
}