//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 8;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }
   int t; cin >> t;
   while(t--) {
     string s; cin >> s;
     map<char, int> mp;
     for(auto u : s) {
       mp[u]++;
     } 
     bool flag = true;
     if(f[mp.size()]) flag = false;
     for(auto u : mp) {
       if(f[u.second]) flag = false;
     }
     if(flag) cout << "YES\n";
     else cout << "NO\n";
   }
   return 0;
}