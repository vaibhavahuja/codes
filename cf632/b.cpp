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


bool answer(vi a, vi b){
	int plus = -1, minus = -1;
	for(int i = 0; i < a.size(); i++){
		if(a[i] > b[i] && minus == -1) return false;
		else if(a[i] < b[i] && plus == -1) return false;

		if(a[i] == 1) plus = 1;
		else if(a[i] == -1) minus = 1;
	}
	return true;
}

int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	  int n;
	  cin>>n;
	  vi a(n), b(n);
	  for(int i = 0; i < n; i++) cin>>a[i];
	  for(int i = 0; i < n; i++) cin>>b[i];

	  if(answer(a, b)){
	  	cout<<"YES"<<endl;
	  }else cout<<"NO"<<endl;


  }
  

}