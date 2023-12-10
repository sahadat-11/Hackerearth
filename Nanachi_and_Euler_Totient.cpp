//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   vector<ll > divs;
   for(ll i = 1; i * i <= n; i++) {
      if(n % i == 0) {
         divs.push_back(i);
         if(i != n / i) divs.push_back(n / i);
      }
   }
   ll ans = 1;
   for(auto u : divs) {
      ll res = u;
        for(ll i = 2; i * i <= u; i++) {
            if(u % i == 0) {
                while(u % i == 0) {
                    u /= i;
                }
                // res *= (i - 1);
                // res /= i;
                res -= res / i;
            }
        }
        if(u > 1) {
            //res *= (u - 1);
            //res /= u;
            res -= res / u;
        }
       ans *= res; 
   }
   cout << ans << endl;
   return 0;
}



#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
const ll mod = 1e9 + 7;

ll power(ll b, ll e) {
   ll c = 1;
   while(e) {
      if(e&1LL)   c = (c*b)%mod;
      b = (b*b)%mod;
      e /= 2LL;
   }
   return c;
}

ll nC2(ll n) {
   return (n*(n - 1LL))/2LL;
}

int main() {
   ll n;
   cin >> n;
   
   ll ans = 1, numberOfDivisors = 1, i = 2;
   vector<pair<ll, ll> > factorisation;
   
   while(i*i <= n) {
      if(n%i == 0) {
         ll k = 0;
         while(n%i == 0) {
            n /= i;
            k++;
         }
         factorisation.push_back({i, k});
         numberOfDivisors *= (k + 1);
      }
      i++;
   }
   if(n != 1) {
      factorisation.push_back({n, 1});
      numberOfDivisors *= 2LL;
   }
   
   for(int i = 0; i < (int)factorisation.size(); ++i) {
      auto u = factorisation[i];
      ll p = power(u.F, nC2(u.S));
      p = (p * power(u.F - 1, u.S));
      p = power(p, numberOfDivisors/(u.S + 1));
      ans = (ans * p)%mod;
   }
   
   cout << ans << endl;
   return 0;
}