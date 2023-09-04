#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// boilerplate for linked list
class ll
{
public:
    int data;
    ll *next;
    ll(int val)
    {
        data = val;
        next = NULL;
    }
};
int main()
{
    ll *head = new ll(1);
    head->next = new ll(2);
    head->next->next = new ll(3);
    head->next->next->next = new ll(4);
    head->next->next->next->next = new ll(5);
    
    // print the linked list
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
 return 0;
}