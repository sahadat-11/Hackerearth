//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) {// if b in odd
			ans = (ans * 1ll * a); // type cast for integer overflow
		}
		a = (a * 1ll * a);
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	ll n; cin >> n;
  	ll set_bit = __builtin_popcountll(n);
  	cout << binexp(2, set_bit) << '\n'; //all possible subset;
  }
  return 0;
}