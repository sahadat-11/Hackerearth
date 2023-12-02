// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int t; cin >> t;
//    while(t--) {
//       int n, k; cin >> n >> k; ll a[n];
//    for(int i = 0; i < n; i++) cin >> a[i];
//    ll sum = 0;
//    multiset<ll, greater<ll> > st;
//    for(int i = 0; i < n; i++) {
//       st.insert(a[i]);
//    }
//    for(int i = 0; i < k; i++) {
//       //cout << (*st.begin()) << endl;
//       sum += (*st.begin());
//       st.insert((*st.begin()) / 2);
//       st.erase(st.begin());
//    }
//    cout << sum << "\n";
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
   int t; cin >> t;
   while(t--) {
      int n, k; cin >> n >> k; ll a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   ll sum = 0;
   multiset<ll> st;
   for(int i = 0; i < n; i++) {
      st.insert(a[i]);
   }
   for(int i = 0; i < k; i++) {
      auto last_it = (--st.end());
      ll candy = *last_it;
      sum += (candy);
      st.insert(candy / 2);
      st.erase(last_it);
   }
   cout << sum << "\n";
   }
   return 0; 
}