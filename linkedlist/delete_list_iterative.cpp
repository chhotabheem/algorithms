struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void delete_list_iterative(ListNode *head)
{
    while (head)
    {
        ListNode *temp = head->next;
        delete head;
        head = temp;
    }
}