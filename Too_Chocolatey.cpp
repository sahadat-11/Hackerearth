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
     vector<int> v(n);
     for(int i = 0; i < n; i++) cin >> v[i];
     map<int, int, greater<int>> mp;
     for(int i = 0; i < n; i++) {
       mp[v[i]]++;
     }
     int sum1 = 0, sum2 = 0;
     bool flag = true;
     for(auto u : mp) {
       if(u.second >= 2) {
         sum1 += u.first;
         sum2 += u.first;
       }
       else {
         if(flag) sum1 += u.first;
         else sum2 += u.first;
         flag ^= true;
       }
     }
     //cout << sum1 << ' ' << sum2 << endl;
     if(sum1 > sum2) cout << "Alex\n";
     else cout << "Bob\n";
   }
   return 0;
}
