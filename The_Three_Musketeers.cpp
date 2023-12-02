//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool isvowel(char c) {
   return (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u');
}
vector<string> subsets(vector<char> vowel) {
   vector<string> ans;
   int sub_cnt = (1 << vowel.size());
   for(int mask = 0; mask < sub_cnt; mask++) {
      string s;
      for(int bit = 0; bit < vowel.size(); bit++) {
         if(mask & (1 << bit)) {
            s.push_back(vowel[bit]);
         }
      }
      if(s.size()) { // else empty string insert;
         ans.push_back(s);
      }
   }
   return ans;
} 
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n; string s[n];
   for(int i = 0; i < n; i++) cin >> s[i];
   map<string, int> mp;
   for(int i = 0; i < n; i++) {
      set<char> st;
      for(auto u : s[i]) {
         if(isvowel(u)) {
            st.insert(u);
         }
      }
      vector<char> vowel;
      for(auto u : st) {
         vowel.push_back(u);
      }
      //for(auto u : vowel) cout << u; cout << "\n";
      auto all_subsets = subsets(vowel);
      for(auto s : all_subsets) {
         mp[s]++;
      }
      // for(auto u : mp) {
      //    cout << u.first << " " << u.second << endl;
      // }
   }
   ll ans = 0;
   for(auto u : mp) {
      if(u.second < 3) continue;
      ll cnt = u.second;
      ll ways = cnt * (cnt - 1) * (cnt - 2) / 6; // NcR
      if((u.first).size() % 2) ans += ways;
      else ans -= ways;
   }
   cout << ans << endl;
   }
   return 0;
}
// https://prnt.sc/0I_6gWoAEFvu
// https://prnt.sc/J5IrBieDZM3b
// https://prnt.sc/bpBU3EBVEm76
// https://youtu.be/rrH3nZ9KjCY?si=gny_QV6QTUZVrjaf