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
      if(n == 1) cout << "YES\n";
      else if(isprime(n + 1)) {
         cout << "NO\n";
      }
      else {
         cout << "YES\n";
      }
   }
   return 0;
}

// All we have to do is to check whether the n+1 number is prime or not 
// if it is prime then sum of the number including n will not divide product
// of the numbers including n and if it is not prime then sum will divide product.