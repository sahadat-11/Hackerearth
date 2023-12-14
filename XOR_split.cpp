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
      ll n; cin >> n;
      int one = __builtin_popcountll(n);
      if(one == 1 or n == 0) { // one = 1; means 2's power
         cout << "0\n";
      }
      else {
         cout << "1\n";
      }
   }
   return 0;
}