#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
int main() { _
  ll N, current, diff, last, moves = 0;
  cin >> N;
 
  for(ll i = 0; i < N; i++) {
    cin >> current;
    if(i == 0) {
      last = current;
      continue;
    };
 
    if(last > current) {
      diff = last - current;
      moves += diff;
      current += diff;
    }
 
    last = current;
  }
 
  cout << moves << endl;
 
  return 0;
}