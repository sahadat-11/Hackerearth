//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x; cin >> n >> x;
    int res;
    for(int k = 0; k < x; k++) {
       res = n;
       for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                while(n % i == 0) {
                    n /= i;
                }
                // res *= (i - 1);
                // res /= i;
                res -= res / i;
            }
        }
        if(n > 1) {
        //res *= (n - 1);
        //res /= n;
        res -= res / n;
        //cout << res << "\n";
      }
    }
    cout << res << "\n";
    return 0;
}