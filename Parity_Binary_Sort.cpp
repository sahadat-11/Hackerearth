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
      for(int i = 0; i < n; i++) cin >> a[i];
      vector<int> even, odd;
      for(int i = 0; i < n; i++) {
         int cnt = __builtin_popcount(a[i]);
         if(cnt & 1) odd.push_back(a[i]);
         else even.push_back(a[i]);
      }
      sort(odd.begin(), odd.end());
      sort(even.begin(), even.end());
      for(auto u : even) cout << u << " ";
      for(auto u : odd) cout << u << " ";
      cout << "\n";
   }
   return 0;
}