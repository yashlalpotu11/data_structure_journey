
// Q) Given a binary tree, print out all of its root-to-leaf paths one per line.

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

void printArray(int [], int);
void printPathsRecur(Node*, int [], int);
Node* newNode(int );
void printPaths(Node*);

void printPaths(Node *node){
    int path[1000]; //1000==size
    printPathsRecur(node, path, 0);
}

void printPathsRecur(Node *node, int path[], int pathLen){
    if(node == NULL){
        return;
    }

    //append this node to path array
    path[pathLen] = node->data;
    pathLen++;

    //if it is a leaf node, then print the path
    if(node->left == NULL and node->right == NULL){
        printArray(path, pathLen);
    }
    else{
        //otherwise try both subarrays
        printPathsRecur(node->left, path, pathLen);
        printPathsRecur(node->right, path, pathLen);
    }
}

void printArray(int path[], int pathLen){
    for(int i=0; i<pathLen; i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

Node *newNode(int data){
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

    //print all root-to-leaf paths
    printPaths(root);
}