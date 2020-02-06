struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *get_middle_node_in_list(ListNode *head)
{
    if (!head || !head->next)
    {
        return head;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}