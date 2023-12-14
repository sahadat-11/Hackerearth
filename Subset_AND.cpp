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
      int z, n; cin >> z >> n; int a[n];
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         z &= a[i];
      } 
      if(z == 0) {
         cout << "Yes\n";
      } 
      else {
         cout << "No\n";
      }
   }
   return 0;
}