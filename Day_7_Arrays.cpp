#include <bits/stdc++.h>

using namespace std;
#define f for (int i = 0; i < n; i++)
#define f1 for (int i = 1; i < n; i++)
#define fj for (int j = 0; j < n; j++)
#define s(x) sort(x.begin(), x.end());
#define ll long long

int main()

{int n;
    cin>>n;
    vector<int>a(n);
    for(auto i=0;i<n;i++)
    cin>>a[i];
    reverse(a.begin(),a.end());
    for(auto i=0;i<n;i++)
    cout<<a[i]<<" ";
   
    return 0;
}