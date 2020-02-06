struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

int count_nodes_in_list(ListNode *head)
{
    int count = 0;
    while (head)
    {
        ++count;
        head = head->next;
    }
    return count;
}