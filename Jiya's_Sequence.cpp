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
      int n; cin >> n; int a[n];
      ll ans = 1;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         ans *= a[i];
      }
      int rem = ans % 10;
      if(rem == 2 or rem == 3 or rem == 5) {
         cout << "YES\n";
      }
      else {
         cout << "NO\n";
      }
   }
   return 0;
}




