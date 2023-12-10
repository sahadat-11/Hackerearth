//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
pair <int, pair<int, long long> > p[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; ll a[n];
      vector<pair<ll, ll>> v;
      for(int i = 0; i < n; i++) {
         cin >> a[i];
         ll one = __builtin_popcountll(a[i]);
         p[i] = make_pair(one, make_pair(i, a[i]));
      }
      sort(p, p + n);
      for(int i = 0;i < n; i++)
         cout << p[i].second.second << ' ';
      cout << endl;
   }
   return 0;
}