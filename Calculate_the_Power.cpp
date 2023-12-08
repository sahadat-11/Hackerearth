//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
// a <= 10^9, b <= 10^9;
ll binexp(ll a, ll b) {
	ll ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * a) % mod; // type cast for lleger overflow
		}
		a = (a * a) % mod;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll a, b; cin >> a >> b;
  cout << binexp(a, b);
  return 0;
}