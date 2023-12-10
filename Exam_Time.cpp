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
        int res = n;
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
        }
        cout << res << endl;
    }
    return 0;
}
// O(t * sqrt(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int phi[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i <= N; i++) phi[i] = i;
    for(int i = 2; i <= N; i++) {
        if(phi[i] == i) {
            for(int j = i; j <= N; j += i) {
                // phi[j] /= i;
                // phi[j] *= (i - 1);
                phi[j] -= phi[j] / i;
            }
        }
    }
    //for(int i = 1; i <= n; i++) cout << phi[i] << "\n";
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << phi[n] << "\n";
    }
    return 0;
}