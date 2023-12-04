//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   vector<pair<int, string>> v;
   int n; cin >> n;
   while(n--) {
      string x; int n;
      cin >> x >> n;
      v.push_back({-n, x});
   }
   sort(v.begin(), v.end());
   for(auto u : v) {
      cout << u.second << " " << -u.first << "\n";
   }
   return 0;
}


