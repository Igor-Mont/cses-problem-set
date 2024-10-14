#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
ll square(ll x) {
  return x * x;
}
 
int main() { _
  int K;
  ll total, possibilities;
  cin >> K;
 
  for (int i = 1; i <= K; i++) {
    ll squareI = square(i);
    total = (squareI * (squareI - 1)) / 2;
    possibilities = 4 * (i - 1) * (i - 2);
    cout << total - possibilities << endl;
  }
 
  return 0;
}