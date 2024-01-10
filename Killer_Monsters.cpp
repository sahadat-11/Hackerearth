//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     int f[n] = {false};
     vector<int> ans;
     ans.push_back(1);
     for(int i = 1; i < n; i++) {
       int cnt = 1;
       for(int j = 0; j < i; j++) {
         if(a[j] <= a[i]) f[j] = true;
       }
       for(int j = 0; j < i; j++) {
         if(!f[j]) cnt++;
       }
       ans.push_back(cnt);
     }
     for(auto u : ans) cout << u << " "; cout << "\n";
   }
   return 0;
}

// O(n * n)


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n; cin >> n; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     stack<int> st;
     vector<int> ans;
     ans.push_back(1);
     st.push(a[0]);
     for(int i = 1; i < n; i++) {
       while(!st.empty() and st.top() <= a[i]) {
         st.pop();
       }
       st.push(a[i]);
       ans.push_back(st.size());
     }
     for(auto u : ans) cout << u << " "; cout << "\n";
   }
   return 0;
}

// O(n)