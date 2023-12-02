//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	 int n, m; cin >> n >> m;
  	 map<ll, ll> mp;
  	 for(int i = 0; i < n; i++) {
  	 	ll x; cin >> x;
  	 	mp[x]++;
  	 }
  	 for(int i = 0; i < m; i++) {
  	 	ll x; cin >> x;
  	 	if(mp[x]) cout << "YES\n";
  	 	else cout << "NO\n";
  	 	mp[x]++;
  	 }
  }
  return 0;
}

// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/