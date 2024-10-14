#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
 
ll power(ll b, ll e) {
  ll MOD = 1e9 + 7;
  ll ans = 1;
  while (e) {
    if (e & 1LL) ans = (ans * b) % MOD;
    b = (b * b) % MOD;
    e >>= 1LL;
  }
  return ans;
}
 
int main() { _
  ll n; cin >> n;
  cout << power(2LL, n) << endl;
  return 0;
}