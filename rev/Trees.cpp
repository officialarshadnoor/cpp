#include <iostream>
#include <queue>
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
        return NULL;
    // if data is not -1 then steps a, b and c
    Node *root = new Node(data);
    // step b
    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();
    // step c
    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     // initially
//     q.push(root);

//     while (!q.empty())
//     {
//         // A
//         Node *temp = q.front();
//         // B
//         q.pop();
//         // c
//         cout << temp->data << " ";
//         // d
//         if (temp->left)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             q.push(temp->right);
//         }
//     }
// }

// Inorder traversal
// void inorderTraversal(Node *root)
// {
//     if (root == NULL)
//         return;

//     // LNR
//     inorderTraversal(root->left);
//     cout << root->data << " ";
//     inorderTraversal(root->right);
// }

// Pre Order  Traversal
// void preorderTraversal(Node *root)
// {
//     if (root == NULL)
//         return;

//     cout << root->data << " ";
//     preorderTraversal(root->left);
//     preorderTraversal(root->right);
// }

// code for height/ maxdepth

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int height(Node *root)
{
    if (root == NULL)
        return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight);
    return ans;
}

int main()
{
    Node *root = NULL;
    root = buildTree();

    // inorderTraversal(root);

    return 0;
}