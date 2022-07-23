#include <bits/stdc++.h>
using namespace std;

int A[1010][1010], N;

/*
i == j 이면 '-'
A[i][j] == 'w' 이면, 선수 i 가 선수 j를 이긴다는 의미
A[i][j] == 'L' 이면, 선수 i가 선수 j에게 진다는 의미
A[i][j] == 'D' 이면, 선수 i가 선수 j와 비긴다는 의미j


*/

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N;
  for(int i = 1; i <= N; i++){
    string str; cin >> str;
    for(int j = 1; j <= N; j++){
      A[i][j] = str[j-1];
    }
  }
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= i; j++){
      if(i == j){
        if(A[i][j] != '-'){
          cout << "incorrect" << "\n";
          return 0;
        }
      }else{
        int tmp_i = j;
        int tmp_j = i;
        if(A[i][j] == 'D'){
          if(A[tmp_i][tmp_j] != 'D'){
            cout << "incorrect" << "\n";
            return 0;
          }
        }else if(A[i][j] == 'W'){
          if(A[tmp_i][tmp_j] != 'L'){
            cout << "incorrect" << "\n";
            return 0;
          }
        }else if(A[i][j] == 'L'){
          if(A[tmp_i][tmp_j] != 'W'){
            cout << "incorrect" << "\n";
            return 0;
          }
        }
      }
    }
  }
  cout << "correct" << "\n";
  return 0;
}