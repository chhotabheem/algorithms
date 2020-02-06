struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *find_intersection_of_2_lists(ListNode *head1, ListNode *head2)
{
    if (!head1 || !head2)
    {
        return nullptr;
    }
    if (head1 == head2)
    {
        return head1;
    }

    int len1 = 0;
    ListNode *curr1 = head1;
    while (curr1)
    {
        ++len1;
        curr1 = curr1->next;
    }

    int len2 = 0;
    ListNode *curr2 = head2;
    while (curr2)
    {
        ++len2;
        curr2 = curr2->next;
    }
    curr1 = head1;
    curr2 = head2;
    if (len1 > len2)
    {
        while (len1 != len2)
        {
            --len1;
            curr1 = curr1->next;
        }
    }
    else
    {
        while (len1 != len2)
        {
            --len2;
            curr2 = curr2->next;
        }
    }
    while (curr1 && curr2)
    {
        if (curr1 == curr2)
        {
            return curr1;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
    return nullptr;
}