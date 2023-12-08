//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
ll binexp(ll a, ll b) {
	a %= mod;
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
  ll a; cin >> a;
  string b; cin >> b;
  ll bmod = 0;
  for(int i = 0; i < b.size(); i++) {
  	bmod = (10 * bmod + b[i] - '0') % (mod - 1);
  }
  cout << binexp(a, bmod);
  return 0;
}