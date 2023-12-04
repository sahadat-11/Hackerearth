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
      int n, k; cin >> n >> k; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      int mn = *min_element(a, a + n);
      cout << k - mn << "\n";
   }
   return 0;
}




