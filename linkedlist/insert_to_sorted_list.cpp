#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *get_new_node(int data)
{
    ListNode *node = new ListNode;
    node->data = data;
    return node;
}

ListNode *insert_to_sorted_list(ListNode *head, int data)
{
    ListNode *newnode = get_new_node(data);
    if (!head)
    {
        return newnode;
    }
    if (head->data > data)
    {
        newnode->next = head;
        return newnode;
    }
    ListNode *curr = head->next;
    ListNode *prev = head;
    while (curr)
    {
        if (curr->data > data)
        {
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    newnode->next = curr;
    prev->next = newnode;
    return head;
}
