#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> moves = {make_pair(-1, -1), make_pair(-1, 0), make_pair(-1, 1), make_pair(0, -1), make_pair(0, 1), make_pair(1, -1), make_pair(1, 0), make_pair(1, 1)};
void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int curr_len, int i, int j, char prev_letter, int &max_l)
{
    if (i >= grid.size() || j >= grid[0].size() || i < 0 || j < 0)
    {
        return;
    }
    if (grid[i][j] != prev_letter + 1 && curr_len != 0)
    {
        return;
    }
    if (visited[i][j])
        return;

    cout << grid[i][j] << " " << curr_len << " ";
    curr_len++;
    max_l = max(curr_len, max_l);
    visited[i][j] = true;
    for (auto p : moves)
    {
        dfs(grid, visited, curr_len, p.first + i, p.second + j, grid[i][j], max_l);
    }
}
int main()
{
    int i = 0;
    while (1)
    {
        i++;
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0)
            return 0;
        else if (h == 0 || w == 0)
            cout << "CASE " << i << ":0\n";
        else
        {
            vector<vector<char>> grid(h, vector<char>(w));
            for (int j = 0; j < h; j++)
            {
                for (int k = 0; k < w; k++)
                {
                    cin >> grid[j][k];
                }
            }
            int max_l = 0;
            for (int j = 0; j < h; j++)
            {
                for (int k = 0; k < w; k++)
                {
                    if (grid[j][k] == 'A')
                    {
                        vector<vector<bool>> visited(h, vector<bool>(w, false));
                        dfs(grid, visited, 0, j, k, '-', max_l);
                    }
                }
            }
            cout << "CASE " << i << ": " << max_l << "\n";
        }
    }
}