#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll N, M;
ll X[5050];
int 
/*


3 2
1000000000 1000000000 1000000000
1 1000000000
3 1000000000

첫번째 앞면 -> 한개 받고, 스트릭보너스로 한개 더받음
두번째 뒷면 -> 1개 받고, 스트릭 보너스가 없음
두번째 앞면 -> 1개 받고 스트릭 보너스가 있음


*/

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cin >> N >> M;
  for(ll i = 1; i <= N; i++){
    cin >> X[i];
  }



  return 0;
}