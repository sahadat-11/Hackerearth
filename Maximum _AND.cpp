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
      ll a, b; cin >> a >> b;
      ll msb = 63 - (__builtin_ctz(b));
      cout << msb << endl;
   }
   return 0;
}