struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *remove_nth_node_from_end(ListNode *head, int n)
{
    if (!head)
    {
        return nullptr;
    }
    ListNode *fast = head;
    while (fast && n--)
    {
        fast = fast->next;
    }
    if (n > 0)
    {
        return head;
    }
    if (n == 0 && !fast)
    {
        ListNode *node = head->next;
        delete head;
        return node;
    }
    ListNode *slow = head;
    while (fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    ListNode *node = slow->next;
    slow->next = node->next;
    delete node;
    return head;
}