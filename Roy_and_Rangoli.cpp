// // //In The Name of ALLAH
// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long
// // bool isprime(int n) {
// //    if(n <= 1) return false;
// //    for(int i = 2; i * i <= n; i++) {
// //       if(n % i == 0) return false;
// //    }
// //    return true;
// // }
// // int main() {
// //    ios_base::sync_with_stdio(0);
// //    cin.tie(0);
// //    int n; cin >> n;
// //    int cnt = 0;
// //    for(int i = 0; i < n; i++) {
// //       for(int j = 0; j < n; j++) {
// //          if(isprime(i + j)) {
// //             cnt++;
// //          }
// //       }
// //    }
// //    cout << cnt << "\n";
// //    return 0;
// // }

// // // O(n * n * sqrt(n));


// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 2e6 + 7; // (worst case N + N = 2 * N)
// bitset<N> f;
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    f[0] = f[1] = true; 
//    for(int i = 4; i <= N; i += 2) f[i] = true;
//    for(int i = 3; i * i <= N; i += 2) {
//       if(!f[i]) {
//       for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
//      } 
//    }
//    int n; cin >> n;
//    int cnt = 0;
//    for(int i = 0; i < n; i++) {
//       for(int j = 0; j < n; j++) {
//          if(!f[i + j]) {
//             cnt++;
//          }
//       }
//    }
//    cout << cnt << "\n";
//    return 0;
// }

// // O(n * n);


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7, N = 2e6 + 7; // (worst case N + N = 2 * N)
bitset<N> f;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } 
   }
   int n; cin >> n;
   int cnt = 0;
   for(int i = 0; i < n; i++) {
      if(!f[i]) {
         cnt = (cnt + i + 1) % mod;
      }
   }
   for(int i = n; i < 2 * n; i++) {
      if(!f[i]) {
         cnt = (cnt + 2 * (n - 1) - i + 1) % mod;
      }
   }
   cout << cnt << "\n";
   return 0;
}
// O(2 * n)
