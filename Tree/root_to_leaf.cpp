/*
Q) Given a binary tree and a number, return true if the tree has a 
root-to-leaf path such that adding up all the values along the path 
equals the given number. Return false if no such path can be found. 
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node
{
    int data;
    Node *left, *right;
};

bool hasPathSum(Node *root, int sum)
{
    bool answer = 0;

    int subSum = sum - node->data;

    //if we reach to leaf node and sum becomes 0 then return true
    if (node->left == NULL && node->right == NULL && subSum == 0)
    {
        return true;
    }
    if(node->left != NULL)
    {
        answer = answer || hasPathSum(node->left, subSum);
    }
    if(node->right != NULL)
    {
        answer = answer || hasPathSum(node->right, subSum);
    }
    return answer;
}

Node* newNode(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {

	Node *root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);

    if(hasPathSum(root, sum))
        cout << "There is a root-to-leaf path with sum " << sum;
    else
        cout << "There is no root-to-leaf path with sum " << sum;
}
// Time Complexity: O(n)