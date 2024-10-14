#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl;
 
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
using namespace std;
int main() { _
  char c, last;
  ll count = 1, max = -1;
 
  while(cin.get(c)) {
    if(c == last) {
      count++;
      last = c;
      if (count > max) max = count;
      continue;
    }
    
    count = 1;
    last = c;
  }
 
  cout << (max == -1 ? 1 : max)<< endl;
 
  return 0;
}