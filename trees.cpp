/*
---------------- Trees -------------------
*/

/*
-> Binary Tree -> It has max 2 child element
-> Root : Top most node
-> Parent : Last top node
-> Child : Last below node(s) / 1 level below nodes
-> Ancestors : All top nodes
-> Descendant : All below nodes
-> Sibling : All child nodes of same parent node
-> Leaf : Node which have no child node
*/

/*
1 -> Create Root Node
2 -> Root ->left Recursion
3 -> Root ->right Recursion


*/

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    // Step A, B, and C
    Node *root = new Node(data);
    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();
    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

int main()
{

    Node *root = NULL;
    root = buildTree();

    return 0;
}