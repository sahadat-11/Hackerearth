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
     ll sum = 0;
     int min_odd = INT_MAX;
     for(int i = 0; i < n; i++) {
       cin >> a[i];
       sum += a[i];
       if(a[i] % 2) {
         min_odd = min(min_odd, a[i]);
       }
     }
     if(sum % 2 == 0) {
       if(min_odd == INT_MAX) sum = 0;
       else sum -= min_odd;
     }
     cout << sum << "\n";
   }
   return 0;
}


