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
     vector<int> divs;
     for(int i = 1; i * i <= n; i++) {
       if(n % i == 0) {
         divs.push_back(i);
         if(i != n / i) divs.push_back(n / i);
       }
     }
     ll sum = 0;
     for(int i = 0; i < divs.size(); i++) {
       for(int j = i + 1; j < divs.size(); j++) {
         ll x = 1ll * divs[i] * divs[j];
         sum += x;
       }
     }
     cout << sum << "\n";
   }
   return 0;
}



//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
ll div_sum[N], div_square_sum[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       div_sum[j] += i;
       div_square_sum[j] += (1ll * i * i);
     }
   }
   //for(int i = 1; i <= 10; i++) cout << divs[i] << " ";
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     ll sum1 = div_sum[n];
     ll sum2 = div_square_sum[n];
     cout << (sum1 * sum1 - sum2) / 2 << "\n";
   }
   return 0;
}

// https://prnt.sc/duCCJqy_MpwQ

// https://prnt.sc/bXBITGGjPr63
// https://prnt.sc/UnwaLxk5uapm