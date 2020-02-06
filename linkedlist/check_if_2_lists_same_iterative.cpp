struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

bool check_if_2_lists_same_iterative(ListNode *head1, ListNode *head2)
{
    while (head1 && head2)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (!head1 && !head2)
    {
        return true;
    }
    return false;
}