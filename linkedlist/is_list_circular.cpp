struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

bool is_list_circular(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}