//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll ans = 1;
   for(int i = 0; i < n; i++) {
      ans = (ans * a[i]) % mod;
   }
   cout << ans << "\n";
   return 0;
}