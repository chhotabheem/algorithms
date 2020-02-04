#include <iostream>
struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void visit_node(ListNode *node)
{
    std::cout << node->data << std::endl;
}

void traverse_iterative(ListNode *head)
{
    while (head)
    {
        visit_node(head);
        head = head->next;
    }
}