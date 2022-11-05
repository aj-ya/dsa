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

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

int leafSum(Node *head)
{
    if (head == nullptr)
        return 0;
    else if (head->left != nullptr || head->right != nullptr)
    {
        return leafSum(head->left) + leafSum(head->right);
    }
    return head->data;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *Head = new Node(10), *Node2 = new Node(2), *Node3 = new Node(4), *Node4 = new Node(5), *Node6 = new Node(6), *Node7 = new Node(3), *Node5 = new Node(4);
    Head->left = Node2;   //          10
    Head->right = Node3;  //       2    4
    Node3->left = Node4;  //     6  4  5
    Node2->right = Node5; //  3
    Node2->left = Node6;  //
    Node6->left = Node7;  // sum=> 12
    cout << leafSum(Head);
    return 0;
}