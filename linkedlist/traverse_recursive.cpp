#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void visit_node(ListNode *node)
{
    cout << node->next << endl;
}

void traverse_recursive(ListNode *head)
{
    if (!head)
    {
        return;
    }
    visit_node(head);
    traverse_recursive(head->next);
}