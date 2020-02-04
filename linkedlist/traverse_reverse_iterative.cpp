#include <iostream>
#include <stack>
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

void traverse_reverse_iterative(ListNode *head)
{
    if (!head)
    {
        return;
    }
    stack<ListNode *> stk;
    while (head)
    {
        stk.push(head);
        head = head->next;
    }

    while (!stk.empty())
    {
        ListNode *node = stk.top();
        visit_node(node);
        stk.pop();
    }
}