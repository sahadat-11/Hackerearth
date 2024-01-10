//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n, k; cin >> n >> k; int a[n];
      map<int, int> mp;
      int one = 0, doub = 0;
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) {
         mp[a[i]]++;
      }
      for(auto u : mp) {
         if(u.second == 1) one++;
         else doub++;
      }
      if(one + 2 * doub >= 2 * k and one + doub <= 2 * k) {
         cout << "YES\n";
      }
      else {
         cout << "NO\n";
      }
   } 
   return 0;
}
