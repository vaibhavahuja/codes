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


bool ans2(int a, int b, int c){
	while(c--) a-=10;
	if(a<=0) return true;	
	
	while(b--){
		a/=2;
		a+=10;
	}

	if(a<=0) return true;
	else return false;

}

bool ans1(int a, int b, int c){
	while(b--){
		a/=2;
		a+=10;
	}
	while(c--) a-=10;
	if(a<=0) return true;
	else return false;
}




int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  while(n--){
  	int a, b, c;
  	cin>>a>>b>>c;
  	string s = (ans1(a, b, c)|ans2(a, b, c))?"YES":"NO";
  	cout<<s<<endl;
  }

}