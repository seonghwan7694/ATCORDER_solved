#include <bits/stdc++.h>
using namespace std;

int N, K;

/*

1. Draw the topmost card from the deck. Let X be the integer written on it.
덱의 가장 위에 있는 카드를 꺼내고, 그 카드에 적혀진 숫자를 X라 하겠다.
Stack the drawn card, face up, onto the card with the smallest integer among the face-up topmost cards on the table with an integer greater than or equal to X written on them. If there is no such card on the table, put the drawn card on the table, face up, without stacking it onto any card.

Then, if there is a pile consisting of K face-up cards on the table, eat all those cards. The eaten cards all disappear from the table.
*/

queue<int> q;
stack<int> s;
vector<int> tmp;
int ans[200001];
int input[200001];

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> K;
  for(int i = 1; i <= N; i++){
    cin >> input[i];
  }
  int p = 1;
  while(K--){
    if(s.empty()){
      s.push(input[p++]);
      continue;
    }
    if(s.top() < input[p]){
      tmp.push_back(input[p++]);
    }else if(s.top() > input[p]){
      i
    }
  }
  return 0;
}