//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      ll x; cin >> x;
      int cnt = __builtin_popcountll(x);
      cout << cnt << "\n";
   }
   return 0;
}
