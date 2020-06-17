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
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

vi b;
vi a;
vector<vi> check;

void showw(int k, int m){
	if(k == m){
		check.push_back(b);
		return;
	}
	for(int i = 0; i < a.size(); i++){
		b[k] = a[i];
		showw(k+1, m);
	}
}

bool istrue(vi a, vi b){
	for(int i = 1; i < a.size(); i++){
		if(a[i] < a[i-1]) return false;
	}

	for(int i = 1; i < b.size(); i++){
		if(b[i] > b[i-1]) return false;
	}

	for(int i = 0; i < a.size(); i++){
		if(b[i] < a[i]) return false;
	}

	return true;
}

int main(){
  ios_base::sync_with_stdio(false);
  
  int n, m;
  cin>>n>>m;
  for(int i = 0; i < n; i++){
  	a.push_back(i+1);
  }
  for(int i = 0; i < m; i++){
  	b.push_back(0);
  }



  int ans = 0;
  showw(0, m);

    vector<vi> second = check;

  for(int i = 0; i < check.size(); i++){
  	for(int j = 0; j < second.size(); j++){
  		
  		if(istrue(check[i], second[j])){ 
  			ans++;
  		}
  	}
  }
  cout<<ans<<endl;

}