//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int spf[N], h[N];
bool is_remove[N];
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

   int n, t; cin >> n >> t; int a[n];
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     h[a[i]] = 1;
   }
   for(int i = 2; i < N; i++) {
     if(h[i]) {
       for(ll j = i; j < N; j *= i) {
         is_remove[j] = true;
       }
     }
   }
   while(t--) {
      int x; cin >> x;
      int n = x;
      vector<int> primes;
      while(n > 1) {
        int k = spf[n];
        primes.push_back(k);
        while(n % k == 0) {
          n /= k;
        }
      }
      bool flag = false;
      for(int i = 0; i < primes.size(); i++) {
        for(int j = i; j < primes.size(); j++) {
           int product = primes[i] * primes[j];
           if(i == j and x % product != 0) continue;
           int to_remove = x / product;
           if(is_remove[to_remove] or to_remove == 1) {
              flag = true;
              break;
           }
        }
        if(flag) break;
      }
      if(flag) {
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }
   }
   
   return 0;
}

// https://prnt.sc/Tp8uj5LC0z61
// https://prnt.sc/W4BrOBCd7ITZ
// https://prnt.sc/x_-PtUzK2nki
// https://youtu.be/Dg5D-k1rUgY?si=UWNiXMUK8E5jkKbA