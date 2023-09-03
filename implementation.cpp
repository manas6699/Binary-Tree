// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     // print the tree level order traversal
//     queue<Node *> q1;
//     q1.push(root);
//     q1.push(NULL);
//     while (!q1.empty())
//     {
//         Node *node = q1.front();
//         q1.pop();
//         if (node != NULL)
//         {
//             cout << node->data << " ";
//             if (node->left)
//             {
//                 q1.push(node->left);
//             }
//             if (node->right)
//             {
//                 q1.push(node->right);
//             }
//         }
//         else if (!q1.empty())
//         {
//             q1.push(NULL);
//         }
//     }

    

//     return 0;
// }

#include<iostream>
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
};
int main()
{
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);

queue<Node *> q1;
q1.push(root);
while(!q1.empty())
{
Node *node = q1.front();
q1.pop();
cout << node->data << " ";
if(node->left)
{
q1.push(node->left);
}
if(node->right)
{
q1.push(node->right);
}
}
// inorder traversal

 return 0;
}