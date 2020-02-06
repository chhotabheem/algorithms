struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

void remove_given_node_from_list(ListNode *node)
{
    if (!node)
    {
        return;
    }
    //cannot delete the node if its head or tail of the list
    ListNode *temp = node->next;
    node->next = temp->next;
    node->data = temp->data;
    delete temp;
}