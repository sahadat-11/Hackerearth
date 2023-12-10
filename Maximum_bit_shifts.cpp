//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--) {
      ll n; cin >> n;
      ll max_bit = log2(n);
      //cout << x << endl;
      ll one = __builtin_popcountll(n);
      ll res = 0;
      while(one--) {
         res |= (1ll << max_bit);
         max_bit--;
      }
      cout << res << " ";
   }
   return 0;
}

ll n, cnt = 0, len = 0, un = 0;

cin >> n;

cnt = __builtin_popcountll(n);

len = log2(n) + 1;

un = len - cnt;

string s;

while (cnt--)

s += '1';

while (un--)

s += '0';

cout << stoull(s, 0, 2) << " ";