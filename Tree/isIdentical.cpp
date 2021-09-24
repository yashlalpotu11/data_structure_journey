
/*
Two trees are identical when they have same data and arrangement of data is also same. 
To identify if two trees are identical, we need to traverse both trees simultaneously, 
and while traversing we need to compare data and children of the trees. 
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

int isiden(Node *a, Node *b){
    if(a == NULL && b == NULL) return 1;
    if(a != NULL and b != NULL){
        return(
            (a->data == b->data) and isiden(a->left, b->left) and
            isiden(a->right, b->right)
        );
    }
    return 0;
}

Node* newNode(int data){
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

int main() {
	Node *root1 = newNode(1);
    Node *root2 = newNode(1);

    root1->left = newNode(2);
    root1->right = newNode(3);
    
    root2->left = newNode(2);
    root2->right = newNode(4);

    if(isiden(root1, root2)) cout << "Identical" << endl;
    else cout << "Not Identical" << endl;
}