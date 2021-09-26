
/*
Lowest Common Ancestor in a Binary Search Tree.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

Node *lca(Node *root, int n1, int n2){
    if(root==NULL) return NULL;

    // If both n1 and n2 are smaller
    // than root, then LCA lies in left
    if(root->data > n1 && root->data > n2){
        return lca(root->left, n1, n2);
    }

    // If both n1 and n2 are greater
    // than root, then LCA lies in right
    if(root->data < n1 && root->data < n2){
        retrun lca(root->right, n1, n2);
    }

    return root;
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

    int n1 = 10, n2 = 14;
    Node *t = lca(root, n1, n2);
    cout << "LCA of " << n1 << " and " << n2 << " is " << t->data<<endl;
}

/*
Time Complexity: O(h). 
The time Complexity of the above solution is O(h), where h is the height of the tree.
Space Complexity: O(h). 
If recursive stack space is ignored, the space complexity of the above solution is constant.
*/
