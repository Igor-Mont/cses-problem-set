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
 
bool even(ll x) {
  return x % 2 == 0;
}
 
int main() { _
  ll N, Y, X, A, B;
  cin >> N;
 
  for (ll i = 0; i < N; i++) {
    cin >> Y >> X;
    
    if (Y > X) {
      A = square(Y - 1);
      B = even(Y) ? (2 * Y) - X : X;
 
      cout << A + B << endl;
    } else {
      A = square(X - 1);
      B = even(X) ? Y : (2 * X) - Y;
 
      cout << A + B << endl;
    }
  }
 
  return 0;
}