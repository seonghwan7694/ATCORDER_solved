#include <bits/stdc++.h>
using namespace std;

string str;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  cin >> str;
  if(str[0] == str[1]  and str[1]== str[2] and str[2] == str[0]){
    cout << -1;
  }else if(str[0] == str[1]){
    cout << str[2];
  }else if(str[1] == str[2]){
    cout << str[0];
  }else if(str[0] == str[2]){
    cout << str[1];
  }else{
    cout << str[0];
  }
  return 0;
}