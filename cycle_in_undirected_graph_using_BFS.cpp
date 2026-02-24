#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long
vector<vector<int>> v(10005);
bool vis[10005];
int parent[10005];
bool cycle;
void bfs(int scr)
{
    queue<int> q;
    q.push(scr);
    vis[scr] = true;
  
    while (!q.empty())
    {
        /* code */
    
      int par = q.front();
    q.pop();
    for (auto x : v[par])
    {
        if (vis[x] && parent[par] != x)
        {
            cycle = true;
        }
        if (!vis[x])
        {
            q.push(x);
            vis[x] = true;
            parent[x] = par;
        }
    }
}
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
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;
    for(auto i=0;i<n;i++)
    {
        if (!vis[i])
        {
            bfs(i);
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