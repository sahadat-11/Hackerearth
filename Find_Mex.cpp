//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int f[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int x = 0;
   for(int i = 0; i < n; i++) {
     f[a[i]] = true;
     while(f[x]) x++;
     cout << x << " ";
   }
   return 0;
}
