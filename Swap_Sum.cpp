//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, k; cin >> n >> k; int a[n], b[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     for(int i = 0; i < n; i++) cin >> b[i];
     vector<pair<int, int>> dif;
     for(int i = 0; i < n; i++) {
       dif.push_back({b[i] - a[i], i});
     }
     sort(dif.rbegin(), dif.rend());
     for(int i = 0; i < n; i++) {
       if(dif[i].first > 0 and i < k) {
         swap(a[dif[i].second], b[dif[i].second]);
       }
     }
     ll sum = 0;
     for(int i = 0; i < n; i++) sum += a[i];
     cout << sum << "\n";
   }
   return 0;
}
