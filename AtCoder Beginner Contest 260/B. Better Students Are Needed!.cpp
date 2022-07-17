#include <bits/stdc++.h>
using namespace std;

int N, X, Y, Z;
typedef struct{
  int math;
  int english;
  int sum;
  int idx;
}score;

vector<int> ans;
vector<score> student;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N >> X >> Y >> Z;
  
  student.resize(N + 1);
  for(int i = 1; i <= N; i++){
    cin >> student[i].math;
    student[i].idx = i;
  }
  for(int i = 1; i <= N; i++){
    cin >> student[i].english;
    student[i].sum = student[i].english + student[i].math;
  }
  student.erase(student.begin());

  if(X + Y + Z == N){
    for(int i = 1; i <= N; i++){
      cout << i << "\n";
    }
    return 0;
  }

  sort(student.begin(), student.end(), [](score &a, score &b){
    if(a.math == b.math){
      return a.idx < b.idx;
    }
    return a.math > b.math;
  });

  auto iter = student.begin();

  while(X--){
    if(find(ans.begin(), ans.end(), iter->idx) == ans.end()){
      ans.push_back(iter->idx);
    }else{
      X++;
      iter++;
    }
  }
  sort(ans.begin(), ans.end());





  sort(student.begin(), student.end(), [](score &a, score &b){
    if(a.english == b.english){
      return a.idx < b.idx;
    }
    return a.english > b.english;
  });

  iter = student.begin();

  while(Y--){
    if(find(ans.begin(), ans.end(), iter->idx) == ans.end()){
      ans.push_back(iter->idx);
    }else{
      Y++;
      iter++;
    }
  }
  sort(ans.begin(), ans.end());



  sort(student.begin(), student.end(), [](score &a, score &b){
    if(a.sum == b.sum){
      return a.idx < b.idx;
    }
    return a.sum > b.sum;
  });

  iter = student.begin();

  while(Z--){
    if(find(ans.begin(), ans.end(), iter->idx) == ans.end()){
      ans.push_back(iter->idx);
    }else{
      Z++;
      iter++;
    }
  }
  sort(ans.begin(), ans.end());

  for(auto x : ans) cout << x << "\n";
  return 0;
}