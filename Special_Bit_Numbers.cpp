//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int pre_cal[N];
bool is_valid(int n) {
	for(int bit = 0; bit < 30; bit++) {
		if(n & (1 << bit) and (n & (1 << (bit + 1)))) return true;
	}
	return false;
}
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q; int a[n + 1];
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  	pre_cal[i] = pre_cal[i - 1] + is_valid(a[i]); 
  }
  while(q--) {
  	int l, r; cin >> l >> r;
  	cout << pre_cal[r] - pre_cal[l - 1] << "\n";
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
int pre_cal[N];
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q; int a[n + 1];
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  	pre_cal[i] = pre_cal[i - 1];
  	if(a[i] & (a[i] << 1)) pre_cal[i]++;
  }
  while(q--) {
  	int l, r; cin >> l >> r;
  	cout << pre_cal[r] - pre_cal[l - 1] << "\n";
  }
  return 0;
}