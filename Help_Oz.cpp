//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//const int mx= 1e9 + 7;
// a <= 10^9, b <= 10^9;
int binexp(int a, int b) {
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % 10; // type cast for integer overflow
		}
		a = (a * 1ll * a) % 10;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mx = *max_element(a, a + n);
  vector<int> v;
  for(int i = 2; i <= mx; i++) {
  	bool flag = true;
  	for(int j = 0; j < n - 1; j++) {
  		if(a[j] % i != a[j + 1] % i) {
  			flag = false; break;
  		} 
  	}
  	if(flag) v.push_back(i);
  }
  for(auto u : v) cout << u << " ";
  return 0;
}
