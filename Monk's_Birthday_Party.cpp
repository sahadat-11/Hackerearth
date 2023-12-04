//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      set<string> st;
      while(n--) {
         string s; cin >> s;
         st.insert(s);
      }
      for(auto u : st) cout << u << "\n"; cout << "\n";
   }
   return 0;
}


