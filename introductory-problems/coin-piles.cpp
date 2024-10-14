#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
int main() { _
  int t; cin >> t;
  ll a, b;
 
  while (t--) {
    cin >> a >> b;
    if (a > b) swap(a, b);
    bool possible = (2 * a >= b && (a + b) % 3 == 0);
    possible ? cout << "YES" << endl : cout << "NO" << endl;  
  }
 
  return 0;
}