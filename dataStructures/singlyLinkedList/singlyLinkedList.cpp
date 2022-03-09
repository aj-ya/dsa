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
    int data;
    ListNode *next;
    ListNode(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
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
            while (temp != nullptr && temp->data != data)
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
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }

} SLL;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ListNode *head = new ListNode(10);
    SLL list;
    list.insert(10);
    list.insert(20);
    list.insert(6);
    list.insert(21);
    list.insert(52);
    list.insert(41);
    list.insert(36);
    list.insert(19);
    cout << list.length();
    list.remove(20);
    list.traverse();
    return 0;
}