#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
vector<vector<int>> v(10005);
bool vis[10005];
bool path[10005];
bool cycle;
void dfs(int scr)
{
    vis[scr] = true;
    path[scr] = true;
    for (auto c : v[scr])
    {
        if (vis[c] && path[c])
        {
            cycle = true;
        }
        if (!vis[c])
        {
            dfs(c);
        }
    }
    path[scr]=false;
}

int main()

{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));
    cycle = false;
    for (auto i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
    {
        cout << "yes cycle " << endl;
    }
    else
        cout << "NO cyele" << endl;

    return 0;
}