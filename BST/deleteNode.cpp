#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class bst
{
public:
    int data;
    bst *left;
    bst *right;
    bst(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
    
    
    // print bst in bfs
    void printbst(bst *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<bst *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            bst *node = q.front();
            q.pop();
            if (node != NULL)
            {
                cout << node->data << " ";
                if (node->left)
                {
                    q.push(node->left);
                }
                if (node->right)
                {
                    q.push(node->right);
                }
            }
            else if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
};
int main()
{
    bst *root = new bst(5);
    root->left = new bst(3);
    root->right = new bst(6);
    root->left->left = new bst(2);
    root->left->right = new bst(4);
    root->right->right = new bst(7);
    bst *b1;
    b1->printbst(root);
    return 0;
}