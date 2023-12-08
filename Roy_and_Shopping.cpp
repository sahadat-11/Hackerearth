//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int spf[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      int x = n;
      int mn = INT_MAX;
      while(n > 1) {
         int k = spf[n];
         mn = min(mn, k);
         n /= k;
      }
      cout << x - mn << "\n";
   }
   return 0;
}