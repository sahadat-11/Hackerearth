//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
bool isprime(ll n) {
   if(n <= 1) return false;
   for(ll i = 2; i * i <= n; i++) {
      if(n % i == 0) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   ll sum = 0;
   for(int i = 0; i < s.size(); i++) {
      if(s[i] >= 'A' and s[i] <= 'Z') {
         sum -= (int)(s[i] + 32);
      }
      else {
         sum += (int)(s[i] - 32);
      }
   }
   sum = abs(sum);
   //cout << sum << "\n";
   cout << isprime(sum);
   return 0;
}
