//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll binexp(ll a, ll b) {
  ll ans = 1;
  while(b) {
    if(b & 1) { 
      ans = (ans *  a);
    }
    a = (a * a);
    b >>= 1; 
  }
  return ans;
}
vector<vector<int>> subsets(vector<int>& nums) {
int n = nums.size();
int sub_cnt = (1 << n); // (2^n);
vector<vector<int>> all_subsets;
for(int mask = 0; mask < sub_cnt; mask++) {
    vector<int> subset;
    for(int i = 0; i < n; i++) {
      if(mask & (1 << i)) {
        subset.push_back(nums[i]);
      }
    }
    all_subsets.push_back(subset);
  }
  return all_subsets;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vector<int> v(n);
    ll sum = 0, ans = 1e18;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      sum += v[i];
    }
    auto all_subsets = subsets(v);
    for(auto subset : all_subsets) {
       ll sum1 = 0, sum2 = 0;
       for(int ele : subset) {
         sum1 += ele;
       }
       sum2 = sum - sum1;
       ll ans1 = binexp(sum1, 2ll);
       ll ans2 = binexp(sum2, 2ll);
       ans = min(ans, abs(ans1 - ans2));
    }
    cout << ans << "\n";
  }
  return 0;
}