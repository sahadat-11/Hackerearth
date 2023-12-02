//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<pair<int, string>> v;
   for(int i = 0; i < n; i++) {
      string name; int mark;
      cin >> name >> mark;
      v.push_back({-mark, name});
   }
   sort(v.begin(), v.end());
   for(auto u : v) {
      cout << u.second << " " << abs(u.first) << "\n";
   }
   return 0; 
}


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   map<int, multiset<string>> mp;
// each integer contain a set;
   for(int i = 0; i < n; i++) {
      string name; int mark;
      cin >> name >> mark;
      mp[-mark].insert(name);
   }
   for(auto u : mp) {
      auto students = u.second; // it is string of set; where each student gain same mark;
      int mark = u.first;
      for(auto name : students) {
         cout << name << " " << -mark << "\n";
      }
   }
   return 0; 
}