//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      string s; cin >> s;
      reverse(s.begin(), s.end());
      ll dec = 0;
      for(int i = 0; i < n; i++) {
         dec += (1ll * (s[i] - '0') * (1ll << i));
         //cout << (1 << i) << " " << dec << "\n";
      }
      cout << dec << "\n";
   }
   return 0;
}
