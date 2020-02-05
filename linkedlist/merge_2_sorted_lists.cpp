struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *merge_2_sorted_lists(ListNode *head1, ListNode *head2)
{
    if (!head1)
    {
        return head2;
    }
    if (!head2)
    {
        return head1;
    }
    ListNode temp;
    ListNode *temp_ptr = &temp;
    while (head1 && head2)
    {
        if (head1->data <= head2->data)
        {
            temp_ptr->next = head1;
            temp_ptr = temp_ptr->next;
            head1 = head1->next;
        }
        else
        {
            temp_ptr->next = head2;
            head2 = head2->next;
            temp_ptr = temp_ptr->next;
        }
    }
    if (head1)
    {
        temp_ptr->next = head1;
        head1 = head1->next;
        temp_ptr = temp_ptr->next;
    }

    if (head2)
    {
        temp_ptr->next = head2;
        head2 = head2->next;
        temp_ptr = temp_ptr->next;
    }
    return temp.next;
}
