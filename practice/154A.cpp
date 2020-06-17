#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

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
  string s;
  cin>>s;
  int k;
  cin>>k;
  int a1 = 0, a2 = 0, cnt = 0;
  while(k--){
  	string t;
  	cin>>t;
  	for(int i = 0; i < s.size(); i++){
  		if(s[i] == t[0]) a1++;
  		else if(s[i]==t[1])a2++;
  		else{
  			cnt += min(a1,a2);
  			a1 = a2 = 0;
  		}
  	}
  }
  cnt += min(a1, a2);
  cout<<cnt<<endl;

}