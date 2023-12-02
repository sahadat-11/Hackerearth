//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string a, b; cin >> a >> b;
      int cnt1[26] = {0}, cnt2[26] = {0};
      for(auto u : a) {
         cnt1[u - 'a']++;
      }
      for(auto u : b) {
         cnt2[u - 'a']++;
      }
      int cnt = 0;
      for(int i = 0; i < 26; i++) {
         cnt += abs(cnt1[i] - cnt2[i]);
      }
      cout << cnt << "\n";
   }
   return 0;
}

