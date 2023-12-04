//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s;
   getline(cin, s);
   stringstream str(s);
   string x;
   while(str >> x) {
      transform(x.begin(), x.end(), x.begin(), ::toupper);
      cout << x << endl;
   }
   return 0;
}




