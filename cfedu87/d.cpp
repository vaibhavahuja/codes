#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  priority_queue<int> a;
  vi v = {1, 2, 3, 4, 5};
  for(int i = 0; i < v.size(); i++){
  	a.push(v[i]);
  }

  auto i = a.top();
  cout<<*i<<endl;

}