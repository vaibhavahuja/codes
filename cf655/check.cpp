#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  	  vi b = {1, 0, 1, 0, 1, 0, 0};
  	  int cnt = 0;
	  b.push_back(3);
	  for(int i = 0; i < b.size(); i++){
	  	if(b[i]==0){
	  		while(b[i] == 0) i++;
	  		cnt++;
	  		i--;
	  	}
	  }
	  cout<<cnt<<endl;

}	