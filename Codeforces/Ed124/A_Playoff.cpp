#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        cout<< (1 << n) -1 <<"\n";
    }
    return 0;
}