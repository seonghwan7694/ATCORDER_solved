#include <bits/stdc++.h>
using namespace std;

int L1, R1, L2, R2;
int line[111];
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> L1 >> R1 >> L2 >> R2;
  for(int i = L1; i <= R1; i++){
    line[i]++;
  }
  for(int i = L2; i <= R2; i++){
    line[i]++;
  }
  int cnt = 0;
  int min_value = 10111, max_value = -1;
  for(int i = 0; i < 101; i++){
    if(line[i] == 2){
      min_value = min(min_value, i);
      max_value = max(max_value, i);
    }
  }
  if(min_value == 10111 or max_value == -1){
    cout << 0 << "\n";
    return 0;
  }
  cout << max_value - min_value << "\n";
  return 0;
}