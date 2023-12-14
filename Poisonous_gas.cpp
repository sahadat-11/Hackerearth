//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f[32];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; int a[n];
      ll sum = 0;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         if(a[i] > 0) sum += a[i];
      }
      if(sum == 0) {
         cout << "No\n";
      }
      else if(!(sum & (sum - 1))) {
         cout << "Yes\n";
      }
      else {
         cout << "No\n";
      }
   }
   return 0;
}