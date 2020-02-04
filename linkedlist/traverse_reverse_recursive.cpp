#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void visit_node(ListNode *node)
{
    cout << node->data << endl;
}

void traverse_reverse_recursive(ListNode *head)
{
    if (!head)
    {
        return;
    }

    traverse_reverse_recursive(head->next);
    visit_node(head);
}