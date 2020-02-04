#include <iostream>
struct List
{
    int data;
    List *next = nullptr;
};

void visit_node(List *node)
{
    std::cout << node->data << std::endl;
}

void traverse_iterative(List *head)
{
    while (head)
    {
        visit_node(head);
        head = head->next;
    }
}