#include <tuple>
using namespace std;
struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

pair<ListNode *, ListNode *> seggregate_odd_even_value_node(ListNode *head)
{
    pair<ListNode *, ListNode *> result(nullptr, nullptr);
    ListNode odd, even;
    ListNode *odd_ptr = &odd;
    ListNode *even_ptr = &even;
    while (head)
    {
        if (head->data % 2 == 0)
        {
            even_ptr->next = head;
            even_ptr = even_ptr->next;
        }
        else
        {
            odd_ptr->next = head;
            odd_ptr = odd_ptr->next;
        }
        head = head->next;
    }
    even_ptr->next = nullptr;
    odd_ptr->next = nullptr;
    result.first = even.next;
    result.second = odd.next;
    return result;
}
