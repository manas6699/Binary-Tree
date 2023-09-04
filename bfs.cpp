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
    void zigzagtraversal(Node *root)
    {
        // if null then return
        if (!root)
            return;

        // declare two stacks
        stack<Node *> currentlevel;
        stack<Node *> nextlevel;

        // push the root
        currentlevel.push(root);

        // check if stack is empty
        bool lefttoright = true;
        while (!currentlevel.empty())
        {
            // pop out of stack
            struct Node *temp = currentlevel.top();
            currentlevel.pop();

            // if not null
            if (temp)
            {

                // print the data in it
                cout << temp->data << " ";

                // store data according to current
                // order.
                if (lefttoright)
                {
                    if (temp->left)
                        nextlevel.push(temp->left);
                    if (temp->right)
                        nextlevel.push(temp->right);
                }
                else
                {
                    if (temp->right)
                        nextlevel.push(temp->right);
                    if (temp->left)
                        nextlevel.push(temp->left);
                }
            }

            if (currentlevel.empty())
            {
                lefttoright = !lefttoright;
                swap(currentlevel, nextlevel);
            }
        }
    }
    void printBfs(Node *root)
    {
        // Base Case
        if (root == NULL)
            return;

        // Create an empty queue for level order traversal
        queue<Node *> q;

        // Enqueue Root and initialize height
        q.push(root);

        while (q.empty() == false)
        {

            // Print front of queue and remove it from queue
            Node *node = q.front();
            cout << node->data << " ";
            q.pop();

            // Enqueue left child
            if (node->left != NULL)
                q.push(node->left);

            // Enqueue right child
            if (node->right != NULL)
                q.push(node->right);
        }
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
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(100);
    Node *n1;
    cout << "The hight of the binary tree is : " << n1->height(root) << endl;
    n1->printBfs(root);
    cout << endl;
    n1->zigzagtraversal(root);

    return 0;
}