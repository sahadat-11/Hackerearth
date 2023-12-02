//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      bool flag = false;
      map<char,int> mp;
      for(auto u : s) mp[u]++;
      for(auto u : mp) {
         if(u.second >= 2) flag = true;
      }
      if(flag) cout << "Yes\n";
      else cout << "No\n";
   }
   return 0;
}