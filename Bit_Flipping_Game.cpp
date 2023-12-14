//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int f[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  while(n--) {
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == '1') {
        f[i] = true;
      }
    }
  }
  int cnt = 0;
  for(int i = 0; i < N; i++) {
    if(f[i]) cnt++;
  }
  if(cnt % 2) {
    cout << "A\n" << cnt << "\n";
  }
  else {
    cout << "B\n" << cnt << "\n";
  }
  return 0;
}