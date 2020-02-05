struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void delete_list_recursive(ListNode *head)
{
    if (!head)
    {
        return;
    }
    delete_list_recursive(head->next);
    delete head;
}