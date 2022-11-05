#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string b;
        cin >> b;
        long long int nm = 0, i = 0;
        while (i <= n - 1 - i)
        {
            if (b[i] != b[n - 1 - i])
                nm++;
            i++;
        }
        nm % 2 == 0 ? cout << nm / 2 : cout << (nm + 1) / 2;
        cout << "\n";
        // do something
    }
    return 0;
}