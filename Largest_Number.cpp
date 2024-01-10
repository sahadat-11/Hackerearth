// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    string s; int k; cin >> s >> k;
//    set<int> st;
//    for(int i = 0; i < s.size() - 1; i++) {
//       if(s[i] < s[i + 1] and k > 0) {
//         st.insert(i); k--;
//       }
//    }
//    for(int i = s.size(); i > 0; i--) {
//       if(s[i] > s[i - 1] and k > 0) {
//         st.insert(i); k--;
//       }
//    }
//    for(int i = 0; i < s.size(); i++) {
//       if(st.find(i) != st.end()) continue;
//       cout << s[i];
//    }
//    return 0;
// }

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; int k; cin >> s >> k;
   ll ans = -1;
   for(int mask = 0; mask < (1ll << s.size()); mask++) {
      if(__builtin_popcount(mask) == k) {
         string tmp;
         for(int i = 0; i < s.size(); i++) {
             if(mask & (1LL << i)) continue;
             tmp.push_back(s[i]); 
         }
         ans = max(ans, stoll(tmp));
      }
   }
   cout << ans << "\n";
   return 0;
}

