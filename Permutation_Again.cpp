//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	int n; cin >> n;
  	ll ans = n / 2 + (1ll * n * (n - 1) / 2 - 1);
  	if(n == 1) ans = 1;
  	cout << ans << "\n";
  }
  return 0;
}

// https://prnt.sc/DLRbQ9JY6QNd
// https://prnt.sc/P5ZMtq9bTrGl