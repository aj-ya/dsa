#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int n;
    cin >> n;
    int a[n], b[n];
    int curr = 0, min = 5001;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != min && a[i] >= b[i])
        {
            if ((a[i] - min) % b[i] != 0)
            {
                curr = -1;
                break;
            }
            else
            {
                curr += (a[i] - min) / b[i];
            }
        }
        else if (a[i] != min && b[i] > a[i])
        {
            curr = -1;
            break;
        }
    }
    if (curr == -1)
    {
        min = 5001, curr = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] - b[i]) < min)
                min = (a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != min && a[i] >= b[i])
            {
                if ((a[i] - min) % b[i] != 0)
                {
                    curr = -1;
                    break;
                }
                else
                {
                    curr += (a[i] - min) / b[i];
                }
            }
            else if (a[i] != min && b[i] > a[i])
            {
                curr = -1;
                break;
            }
        }
    }
    cout<<curr;
    return 0;
}