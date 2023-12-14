//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll n; cin >> n;
      ll ans = 0;
      map<ll, ll> fre;
      for(ll i = 1; i <= n; i++) {
         ll x; cin >> x;
         ll val = (x ^ i);
         ans += fre[val];
         ++fre[val];
      }
      cout << ans << "\n";
   }
   return 0;
}
// https://prnt.sc/yG0sgT9K39aH