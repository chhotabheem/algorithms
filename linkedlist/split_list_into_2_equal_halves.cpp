#include <tuple>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next = nullptr;
};

pair<ListNode *, ListNode *> split_list_into_2_equl_halves(ListNode *head)
{
    pair<ListNode *, ListNode *> result(nullptr, nullptr);
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *head2 = slow->next;
    slow->next = nullptr;
    result.first = head;
    result.second = head2;
    return result;
}