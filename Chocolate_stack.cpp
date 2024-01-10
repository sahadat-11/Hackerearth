//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   stack<int> st;
   for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] == 0 and !st.empty()) {
         cout << st.top() << " ";
         st.pop();
      }
      else if(a[i] != 0){
         st.push(a[i]);
      }
   }
   return 0;
}
