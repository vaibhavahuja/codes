#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]%2<<"";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  string s;
  cin>>s;	
  int x = 0, y = 0;
  for(int i = 0; i < n; i++){
  	if(s[i] == '(') cout<<x, x^=1;
  	else cout<<y, y^=1;
  }
  cout<<endl;
  

}