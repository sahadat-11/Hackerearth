//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; 
   int cnt = 0;
   for(int i = 1; i * i <= n; i++) {
      if(n % i == 0) {
         int a = i;
         int b = n / i; (b >= a); // always;
         if(a % 2 == b % 2) cnt++;
      }
   }
   cout << cnt << "\n";
   return 0;
}

// https://prnt.sc/uTFDElIRdcMD
// https://prnt.sc/d4RU3IrUzvSs