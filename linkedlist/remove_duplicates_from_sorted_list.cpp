struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void remove_duplicates_from_sorted_list(ListNode *head)
{
    if (!head)
    {
        return;
    }

    ListNode *temp_ptr = head;
    ListNode *curr = head->next;
    while (curr)
    {
        if (curr->data == temp_ptr->data)
        {
            ListNode *next = curr->next;
            delete curr;
            curr = next;
        }
        else
        {
            temp_ptr->next = curr;
            curr = curr->next;
            temp_ptr = temp_ptr->next;
        }
    }
    temp_ptr->next = nullptr;
    return;
}