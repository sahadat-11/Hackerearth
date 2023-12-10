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
      ll n, m; cin >> n >> m;
      ll XOR = n ^ m;
      int ans = __builtin_popcountll(XOR);
      cout << ans << "\n";
   }
   return 0;
}