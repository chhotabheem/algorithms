#include <iostream>
using namespace std;

struct List
{
    int data;
    List *next = nullptr;
};

void visit_node(List *node)
{
    cout << node->next << endl;
}

void traverse_recursive(List *head)
{
    if (!head)
    {
        return;
    }
    visit_node(head);
    traverse_recursive(head->next);
}