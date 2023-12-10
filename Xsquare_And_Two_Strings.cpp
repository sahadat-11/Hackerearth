//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s1, s2; cin >> s1 >> s2;
      bool flag = false;
      for(auto u : s2) {
         if(s1.find(u) != -1) {
            flag = true;
         }
      }
      if(flag) {
         cout << "Yes\n";
      }
      else {
         cout << "No\n";
      }
   }
   return 0;
}