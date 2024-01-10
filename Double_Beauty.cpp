//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     int n, k; cin >> n >> k; int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     sort(a, a + n, greater<int>());
     ll max_sum = 0;
     for(int i = 0; i < k; i++) max_sum += a[i];
     cout << 2 * max_sum << "\n";
   }
   return 0;
}

// Find the maximum beauty over all permutations of array A.