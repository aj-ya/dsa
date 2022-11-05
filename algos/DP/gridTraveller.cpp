// go from top-left to bottom-right of the grid only using 2 moves(move bottom,move right)
// how many ways of travelling a grid with given dimensions and given constraints
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> memo(50, vector<int>(50, 0));
int gridTaveller(int n, int m)
{
    if (n == 0 || m == 0)
        return 0; // no ways of reaching
    else if (n == 1 && m == 1)
        return 1; // already there
    else if (memo[n][m] != 0)
        return memo[n][m];
    else
    {
        memo[n][m] = gridTaveller(n - 1, m) + gridTaveller(n, m - 1);
        memo[m][n] = memo[n][m];
        return memo[n][m];
    }
}

int main()
{
    int n = 10, m = 10;
    cout << gridTaveller(n, m);
}
