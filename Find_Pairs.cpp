#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
	ll n, l, r; cin >> n >> l >> r; ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	o_set<ll> even, odd;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] % 2) {
      	ans += (even.order_of_key(r - a[i] + 1));
      	odd.insert(a[i]);
      }
      else {
      	ans += (odd.order_of_key(r - a[i] + 1));
      	even.insert(a[i]);
      }
    }
    even.clear(), odd.clear();
    for(int i = 0; i < n; i++) {
      if(a[i] % 2) {
      	ans -= (even.order_of_key(l - a[i]));
      	odd.insert(a[i]);
      }
      else {
      	ans -= (odd.order_of_key(l - a[i]));
      	even.insert(a[i]);
      }
    }
    cout << ans << "\n";
	return 0;
}
// https://prnt.sc/pXahSe_lbwys
// https://prnt.sc/K6u1Y4vTueoA