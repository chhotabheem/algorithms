struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

bool check_if_2_lists_same_recursive(ListNode *head1, ListNode *head2)
{
    if (!head1 && !head2)
    {
        return true;
    }
    if (!head1 || !head2)
    {
        return false;
    }

    if (head1->data != head2->data)
    {
        return false;
    }

    return check_if_2_lists_same_recursive(head1->next, head2->next);
}