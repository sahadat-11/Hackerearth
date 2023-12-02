//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int c; cin >> c;
   int cnt_bit = (int)log2(c) + 1;// c k represent korte total koita bit lagbe;
   //cout << cnt_bit << endl;
   int a = 0, b = 0;
   vector<int> set_bit;
   for(int i = 0; i < cnt_bit; i++) {
      if(c & (1 << i)) {
         set_bit.push_back(i);
      }
      else {
         a |= (1 << i); // a and b er ith bit set(1) kora
         b |= (1 << i);
      }
   }
   int sub_cnt = (1 << set_bit.size());
   ll ans = 0;
   for(int mask = 0; mask < sub_cnt; mask++) {
      int copy_a = a, copy_b = b;
      for(int i = 0; i < set_bit.size(); i++) {
         if(mask & (1 << i)) {
            copy_a |= (1 << set_bit[i]);
         }
         else {
            copy_b |= (1 << set_bit[i]);
         }
      }
      ans = max(ans, 1ll * copy_a * copy_b);
   }
   cout << ans << "\n";
   return 0;
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void printbinary(int n) {
   for(int i = 10; i >= 0; i--) { // upto 10 th bit binary
      cout << ((n >> i) & 1);
   }
   cout << "\n";
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int c; cin >> c;
   //printbinary(c);
   int msb = 31 - __builtin_clz(c);
   //cout << msb << endl;
   int hightest_power_of_two = (1 << msb);
   int a = hightest_power_of_two - 1;
   //cout << a << "\n";
   int b = a ^ c;
   cout << (1ll * a * b) << "\n";
   return 0;
}
//O(1)
// https://prnt.sc/jQNRnTso5f-P