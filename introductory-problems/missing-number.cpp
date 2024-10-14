#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
int main() { _
  ll N, an, sum = 0;
  cin >> N;
 
  for(ll i = 0; i < N - 1; i++) {
    cin >> an;
    sum += an;
  }
 
  ll sum_pa, rest;
  sum_pa = (N * (1 + N)) / 2;
  rest = sum_pa - sum;
 
  cout << rest << endl;
 
  return 0;
}