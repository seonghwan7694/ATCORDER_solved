#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N, C, T, A;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> C;
  vector<pair<int, int>> op;
  while(N--){
    cin >> T >> A;
    op.push_back({T, A});
    for(auto& x : op){
      if(x.first == 1){
        C &= x.second;
      }else if(x.first == 2){
        C |= x.second;
      }else{
        C ^= x.second;
      }
    }
    cout << C << "\n";
  }

  return 0;
}