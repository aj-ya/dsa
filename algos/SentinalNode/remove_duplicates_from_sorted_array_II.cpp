#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define ALL(x) begin(x), end(x)
#define SZ(x) (ll)(x).size()
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

typedef class SinglyLinkedList
{
private:
    ll size;

public:
    ListNode *head;
    SinglyLinkedList()
    {
        this->head = nullptr;
        this->size = 0;
    }
    void insert(int data) // inserts a node with the given value at the end of the linked list
    {
        if (this->head == nullptr)
            head = new ListNode(data);
        else
        {
            ListNode *temp = this->head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new ListNode(data);
        }
        this->size++;
    }

    void remove(int data) // removes first occurrance of that integer in the linked list
    {
        if (this->head == nullptr)
            return;
        else
        {
            ListNode *temp = this->head, *prev = nullptr;
            while (temp != nullptr && temp->val != data)
            {
                prev = temp;
                temp = temp->next;
            }
            if (temp == nullptr)
                return;
            else
            {
                if (prev == nullptr)
                {
                    this->head = nullptr;
                }
                else
                {
                    prev->next = temp->next;
                    free(temp);
                }
                this->size--;
            }
        }
    }
    ll length()
    {
        return this->size;
    }
    void traverse()
    {
        ListNode *temp = head;
        cout << "\n";
        while (temp != nullptr)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }

} SLL;

ListNode *deleteDuplicates(ListNode *head)
{
    // sentinel
    ListNode *sentinel = new ListNode(0, head);

    // predecessor = the last node
    // before the sublist of duplicates
    ListNode *pred = sentinel;

    while (head != nullptr)
    {
        // if it's a beginning of duplicates sublist
        // skip all duplicates
        if (head->next != nullptr && head->val == head->next->val)
        {
            // move till the end of duplicates sublist
            while (head->next != nullptr && head->val == head->next->val)
            {
                head = head->next;
            }
            // skip all duplicates
            pred->next = head->next;
            // otherwise, move predecessor
        }
        else
        {
            pred = pred->next;
        }

        // move forward
        head = head->next;
    }
    return sentinel->next;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ListNode *node5 = new ListNode(5);
    ListNode *node4 = new ListNode(5, node5);
    ListNode *node3 = new ListNode(3, node4);
    ListNode *node2 = new ListNode(2, node3);
    ListNode *node1 = new ListNode(1, node2);
    ListNode *head = new ListNode(1, node1);
    SLL a;
    a.head = head;
    a.traverse();
    ListNode *add = deleteDuplicates(head);
    a.head = add;
    a.traverse();
    return 0;
}