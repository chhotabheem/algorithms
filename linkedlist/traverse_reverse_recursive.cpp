#include <iostream>
using namespace std;

struct List
{
    int data;
    List *next = nullptr;
};

void visit_node(List *node)
{
    cout << node->data << endl;
}

void traverse_reverse_recursive(List *head)
{
    if (!head)
    {
        return;
    }

    traverse_reverse_recursive(head->next);
    visit_node(head);
}