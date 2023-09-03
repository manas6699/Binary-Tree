#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
    void printBfs(Node *root)
    {
    }
    int height(Node *node)
    {
        if (node == NULL)
            return 0;
        else
        {

            // Compute the height of each subtree
            int lheight = height(node->left);
            int rheight = height(node->right);

            // Use the larger one
            if (lheight > rheight)
            {
                return (lheight + 1);
            }
            else
            {
                return (rheight + 1);
            }
        }
    }
};
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    Node *n1;
    cout << n1->height(root);

    return 0;
}