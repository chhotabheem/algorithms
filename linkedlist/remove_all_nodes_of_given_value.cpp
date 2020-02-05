struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *remove_all_nodes_of_given_value(ListNode *head, int val)
{
    if (!head)
    {
        return nullptr;
    }
    ListNode temp;
    ListNode *temp_ptr = &temp;
    while (head)
    {
        if (head->data == val)
        {
            ListNode *node = head->next;
            delete head;
            head = node;
        }
        else
        {
            temp_ptr->next = head;
            head = head->next;
            temp_ptr = temp_ptr->next;
        }
    }
    return temp.next;
}