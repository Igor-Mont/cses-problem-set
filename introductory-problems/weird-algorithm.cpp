#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
int main() { _
  ll N;
  cin >> N;
  cout << N << " ";
 
  while (N != 1) {
    if (N % 2 == 0) {
      N /= 2;
    } else {
      N *= 3;
      N += 1;
    }
    cout << N << " ";
  }
 
  cout << endl;
 
  return 0;
}