//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      string s; cin >> s;
      int one = count(s.begin(), s.end(), '1');
      cout << one << "\n";
   }
   return 0;
}