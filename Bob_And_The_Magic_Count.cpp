//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; int a[n + 1];
     for(int i = 1; i <= n; i++) cin >> a[i];
     int GCD = 0;
     for(int i = 1; i <= n; i++) {
       GCD = __gcd(GCD, a[i]);
     }
     int ans;
     if(GCD == 1) ans = 0;
     else if(__gcd(GCD, __gcd(a[n], n)) == 1) {
       ans = 1;
     }
     else if(__gcd(GCD, __gcd(a[n - 1], n - 1)) == 1) {
       ans = 2;
     }
     else ans = 3;
     cout << ans << "\n";
   }
   return 0;
}
