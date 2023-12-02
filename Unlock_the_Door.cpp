//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7, mod = 1e9 + 7;
ll fact[N];
ll binexp(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod; // type cast for lleger overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; // b / 2;
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  fact[0] = 1;
  for(ll i = 1; i < N; i++) {
  	fact[i] = (fact[i - 1] * i) % mod;
  }
  ll q; cin >> q;
  while(q--) {
  	ll n, r; cin >> n >> r;
  	ll ans = fact[r]; // npr = n! / ((n - r)!);
  	ll den = (fact[r - n]) % mod;
  	ans = (ans * binexp(den, mod - 2)) % mod; //(a / b) = a * (b ^-1);
  	cout << ans << "\n";
  }
  return 0;
}
//(k!)/(k-n)! .....which comes from kCn * n!