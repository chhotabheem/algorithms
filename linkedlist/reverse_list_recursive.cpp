struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *reverse_list(ListNode *head, ListNode **newhead)
{
    if (!head->next)
    {
        *newhead = head;
        return head;
    }

    ListNode *node = reverse_list(head->next, newhead);
    head->next = nullptr;
    node->next = head;
    return head;
}

ListNode *reverse_list_recursive(ListNode *head)
{
    if (!head)
    {
        return nullptr;
    }
    ListNode *newhead;
    reverse_list(head, &newhead);
    return newhead;
}