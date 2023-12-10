//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll even, odd;
   ll l, r; cin >> l >> r;
   if(l % 2 == 0) l++;
   if(r % 2 == 0) r--;
   ll x = (r - l ) / 2 + 1;
   if(x % 2) cout << "odd";
   else cout << "even";
   return 0;
}