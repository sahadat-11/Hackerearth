//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int XOR = 0;
   for(int i = 0; i < n; i++) {
      XOR ^= a[i];
   }
   int fst_bit = __builtin_ctz(XOR);// first set bit index
   int XOR1 = 0, XOR2= 0;
   for(int i = 0; i < n; i++) {
      if((a[i] & (1 << fst_bit))) {
         XOR1 ^= a[i];
      }
      else {
         XOR2 ^= a[i];
      }
   }
   int mn = min(XOR1, XOR2);
   int mx = max(XOR1, XOR2);
   cout << mn << " " << mx;
   return 0;
}


// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
// ios_base::sync_with_stdio(0);
// cin.tie(0);
// int n; cin >> n; int a[n];
// for(int i = 0; i < n; i++) cin >> a[i];
// int XOR = 0;
// for(int i = 0; i < n; i++) {
//    XOR ^= a[i];
// }
// //int x = XOR; // right shift
// // int ind = -1, c = 0;
// // while(x) {
//     // if(x & 1) {
//     // ind = c;
//       // break;
//     // }
//     // c++;
//     // x >>= 1;
// // }
// //cout << c << endl;
// int ind = -1;
// for(int i = 0; i < 32; i++) { // left shift;
//     if(XOR & (1 << i)) {
//     ind = i;
//     break;
//   }
// }
// int XOR1 = 0, XOR2 = 0;
// for(int i = 0; i < n; i++) {
//    if(a[i] & (1 << ind)) {
//       XOR1 ^= a[i];
//    }
//    else XOR2 ^= a[i];
// }
// int mn = min(XOR1, XOR2);
// int mx = max(XOR1, XOR2);
// cout << mn << " " << mx;
// return 0;
// }