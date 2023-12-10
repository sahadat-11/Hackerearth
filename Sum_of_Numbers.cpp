//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      int s; cin >> s;
      sort(a, a + n);
      bool flag = false;
      for(int i = 0; i < (1 << n); i++) {
        ll sum = 0;
        for(int j = 0; j < n; j++) {
          if(i & (1 << j)) {
            sum += a[j];
          }
        }
        if(sum == s) {
          flag = true; break;
        }
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
   }
   return 0;
}
// all possible subset(2 ^ n * n);
