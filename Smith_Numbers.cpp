//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
int spf[N];
int digit_sum(int n) {
  int sum = 0;
  while(n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   int t; cin >> t;
   while(t--) {
       int l, r; cin >> l >> r;
       int cnt = 0;
       for(int i = l; i <= r; i++) {
         int x = i;
         int sum_n = digit_sum(x);
         int digit_sums_of_all_its_prime_factors = 0;
         while(x > 1) {
           int k = spf[x];
           digit_sums_of_all_its_prime_factors += digit_sum(k);
           x /= k;
         }
         if(sum_n == digit_sums_of_all_its_prime_factors) {
           //cout << i << endl;
           cnt++;
         }
       }
       cout << cnt << "\n";
   }
   return 0;
}
// O(t * R * log(R)) (10^6 * 10^7)


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 7;
int spf[N], pre_cal[N];
int digit_sum(int n) {
  int sum = 0;
  while(n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
bool ok(int n) {
   int sum_n = digit_sum(n);
   int digit_sums_of_all_its_prime_factors = 0;
   while(n > 1) {
     int k = spf[n];
     digit_sums_of_all_its_prime_factors += digit_sum(k);
     n /= k;
   }
   return (sum_n == digit_sums_of_all_its_prime_factors);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   for(int i = 1; i < N; i++) spf[i] = i;
   for(int i = 2; i < N; i++) {
     if(spf[i] == i) {
        for(int j = i; j < N; j += i) {
          spf[j] = min(spf[j], i);
        }
     }
   }
   //for(int i = 1; i < 100; i++) cout << spf[i] << " ";
   
   for(int i = 1; i < N; i++) {
     pre_cal[i] = pre_cal[i - 1] + ok(i);
   }
   int t; cin >> t;
   while(t--) {
       int l, r; cin >> l >> r;
       cout << pre_cal[r] - pre_cal[l - 1] << "\n";
   }
   return 0;
}
// O(t) (10^6)