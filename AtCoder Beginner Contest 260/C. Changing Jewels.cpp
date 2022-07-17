#include <bits/stdc++.h>
using namespace std;

int N, X, Y;
int blue_jewel[11];
int red_jewel[11];

/*
Convert a red jewel of level n (n is at least 2) into "a red jewel of level (n−1) and X blue jewels of level n".
N(>= 2) 레벨인 빨간 보석 1개 -> (N - 1 레벨인 빨간 보석 1개), (N 레벨인 파란 보석 X개) 
Convert a blue jewel of level n (n is at least 2) into "a red jewel of level (n−1) and Y blue jewels of level (n−1)".
N(>= 2) 레벨인 파랑 보석 1개 -> (N - 1 레벨인 빨간 보석 1개), (N - 1 레벨인 파란 보석 Y개)
*/

long long dp[12][2]; // 0 : 빨간 보석, 1 : 파란 보석

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> X >> Y; // 처음에는 N 레벨인 빨간 보석 1개를 가지고 있음

  // 1 레벨인 파란 보석을 최대한 많이 얻는 것이 목표
  dp[N][0] = 1; // 처음에는 N 레벨인 빨간 보석 1개를 가지고 있음
  for(int i = N; i >= 2; i--){
    while(dp[i][0] != 0){
      dp[i][0]--;
      dp[i-1][0] += 1;
      dp[i][1] += X;
    }
    while(dp[i][1] != 0){
      dp[i][1]--;
      dp[i-1][0] += 1;
      dp[i-1][1] += Y;
    }
  }
  cout << dp[1][1];
  return 0;
}