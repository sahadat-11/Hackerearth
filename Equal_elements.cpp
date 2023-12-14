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
      int n; cin >> n;
      int odd = 0, even = 0;
      while(n--) {
         int x; cin >> x;
         if(x & 1) odd++;
         else even++;
      }
      cout << min(odd, even) << "\n";
   }
   return 0;
}