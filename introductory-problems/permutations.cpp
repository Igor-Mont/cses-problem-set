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
 
  if(N == 2 || N == 3) {
    cout << "NO SOLUTION" << endl;
    return 0;
  }
  
  for (ll i = 2; i <= N; i += 2) {
    cout << i << " ";
  }
 
  for (ll i = 1; i <= N; i += 2) {
    cout << i << " ";
  }
 
  return 0;
}