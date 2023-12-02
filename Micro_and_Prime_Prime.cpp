//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 8;
bitset<N>f; // initially false;
bool valid[N];
int prefix[N];
void sieve() {
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
    } 
  }
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   sieve();
   for(int i = 2; i <= 12; i++) {
      if(!f[i]) valid[i] = true;
   }
   for(int i = 1; i <= 10; i++) {
      cout << valid[i] << " ";
   }
   for(int i = 2; i <= N; i++) {
      prefix[i] = prefix[i - 1] + valid[i];
   }
   cout << endl;
   for(int i = 0; i <= 12; i++) cout << prefix[i] << " ";
   int t; cin >> t;
   while(t--) {
      int l, r; cin >> l >> r;
      cout << prefix[r] - prefix[l - 1] << "\n";
   }
   return 0;
}
