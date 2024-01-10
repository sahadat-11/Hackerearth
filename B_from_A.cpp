//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, m; string a, b; cin >> n >> m >> a >> b;
     map<char, int> mp1, mp2;
     for(auto u : a) mp1[u]++;
     for(auto u : b) mp2[u]++;
     int mn = INT_MAX;
     for(auto u : mp2) {
       mn = min(mn, int(mp1[u.first] / mp2[u.first]));
     }
     cout << mn << "\n";
   }
   return 0;
}
