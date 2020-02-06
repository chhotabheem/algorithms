struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

ListNode *reverse_list_iterative(ListNode *head)
{
    ListNode *prev = nullptr;
    while (head)
    {
        ListNode *temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}