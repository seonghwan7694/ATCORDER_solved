#include <bits/stdc++.h>
using namespace std;

int N;
string str;
map<string, int> m;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);

  cin >> N;
  while(N--){
    cin >> str;
    if(m.find(str) == m.end()){
      m.insert({str, 0});
      cout << str << "\n";
    }else{
      int tmp = ++m[str];
      cout << str << "(" << tmp << ")" << "\n";
    }
  }

  return 0;
}