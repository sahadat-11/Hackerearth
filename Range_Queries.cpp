//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int bit_cnt[N][32];
int pre_cal[N][32];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
      for(int bit = 0; bit < 32; bit++) {
         if(i & (1 << bit)) {
            bit_cnt[i][bit]++;
         }
      }
   }
   for(int i = 1; i < N; i++) {
      for(int bit = 0; bit < 32; bit++) {
         pre_cal[i][bit] = pre_cal[i - 1][bit] + bit_cnt[i][bit];
      }
   }
   int t; cin >> t;
   while(t--) {
      int l, r, x; cin >> l >> r >> x;
      x--; // for 0 indexing
      cout << pre_cal[r][x] - pre_cal[l - 1][x] << "\n";
   }
   return 0;
}