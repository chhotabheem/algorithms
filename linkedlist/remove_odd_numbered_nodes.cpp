struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *remove_odd_numbered_nodes(ListNode *head)
{
    ListNode even;
    ListNode *even_ptr = &even;
    while (head)
    {
        if (head->data % 2 == 0)
        {
            even_ptr->next = head;
            even_ptr = even_ptr->next;
            head = head->next;
        }
        else
        {
            ListNode *next = head->next;
            delete head;
            head = next;
        }
    }
    even_ptr->next = nullptr;
    return even.next;
}