//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isprime(int n) {
   for(int i = 2; i * i <= n; i++) {
      if(n % i == 0) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      if(n <= 3) cout << "No\n";
      else if(isprime(n)) cout << "No\n";
      else cout << "Yes\n";
   }
   return 0;
}