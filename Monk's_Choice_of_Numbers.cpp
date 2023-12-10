//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, k; cin >> n >> k; ll a[n];
      vector<pair<ll, ll>> v;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         ll one = __builtin_popcountll(a[i]);
         v.push_back({one, a[i]});
      }
      sort(v.rbegin(), v.rend());
      ll ans = 0;
      for(int i = 0;i < k; i++) {
         ans += v[i].first;
      }  
      cout << ans << "\n";
   }
   return 0;
}