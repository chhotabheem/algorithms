struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *reverse_list(ListNode *head)
{
    ListNode *prev = nullptr;
    while (head)
    {
        ListNode *next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

bool check_if_list_is_palindrome(ListNode *head)
{
    if (!head || !head->next)
    {
        return true;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode *head2 = slow->next;
    ListNode *reversehead = reverse_list(head2);
    ListNode *curr = reversehead;
    while (curr)
    {
        if (curr->data != head->data)
        {
            ListNode *node = reverse_list(reversehead);
            slow->next = node;
            return false;
        }
        curr = curr->next;
        head = head->next;
    }
    ListNode *node = reverse_list(reversehead);
    slow->next = node;
    return true;
}