/*
Q) Mirror of a Tree: Mirror of a Binary Tree T is another Binary Tree M(T) 
with left and right children of all non-leaf nodes interchanged. 

1) Recursive Approach:

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

void mirror(Node *root){

    if(root == NULL){
        return;
    }
    else{
        Node *temp;

        //do the subtree
        mirror(root->left);
        mirror(root->right);

        //swap the pointer in node
        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
}

//inorder traversal
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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

    cout<<"InOrder traversal of original tree : "<<endl;
    inorder(root);

    mirror(root);

    cout<<"\nInOrder traversal of mirror tree : "<<endl;
    inorder(root);
}
/*
Time & Space Complexities: Worst-case Time complexity is O(n) and 
for space complexity, If we don’t consider the size of the recursive 
stack for function calls then O(1) otherwise O(h) where h is the height of the tree.


2) Iterative Approach:

The idea is to do queue based level order traversal. While doing traversal, 
swap left and right children of every node.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

void mirror(Node *root){

    if(root == NULL){
        return;
    }
    
    queue<Node*> q;
    q.push(root);

    //Do Bfs, swap left and right children
    while(!q.empty()){

        //pop top node from queue
        Node *temp = q.front();
        q.pop();

        //swap left and right children
        swap(temp->left, temp->right);

        //push left and right children of popped node
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

//inorder traversal
void inorder(Node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
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

    cout<<"InOrder traversal of original tree : "<<endl;
    inorder(root);

    mirror(root);

    cout<<"\nInOrder traversal of mirror tree : "<<endl;
    inorder(root);
}