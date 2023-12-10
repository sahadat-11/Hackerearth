//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll binexp(ll a, ll b, ll mod) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * a) % mod; // type cast for integer overflow
		}
		a = (a * a) % mod;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	ll a, d, p; cin >> a >> d >> p;
  	a %= p, d %= p;
  	ll ans;
    if(a == 0) ans = 0;
    else if(d == 0) ans = -1;
    else {
    	ll x = binexp(d, p - 2, p);
    	ans = (x * (p - a)) % p;
    }
    cout << ans << "\n";
  }
  return 0;
}

// https://prnt.sc/Cr2d1mzihCuV