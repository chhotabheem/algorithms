struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *search_element_in_list(ListNode *head, int val)
{
    while (head)
    {
        if (head->data == val)
        {
            return head;
        }
        head = head->next;
    }
    return nullptr;
}
