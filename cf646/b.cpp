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

int answer(string s){
	int n = s.length();
	int w;
	int m = 0;
	int czero = 0, cone = 0;
	//making min of all zeros and all ones
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0') czero++;
		else cone++;
	}

	w = min(czero, cone);
	//best answer so far
	vi zerosL(n, 0), zerosR(n, 0);
	vi onesL(n, 0), onesR(n, 0);
	for(int i = 0; i < n; i++){
		if(s[i] == '0') zerosL[i] = 1;
	}
	for(int i = n-1; i >= 0; i--){
		if(s[i] == '0') zerosR[i] = 1;
	}

	for(int i = 1; i < n; i++) zerosL[i] += zerosL[i-1];
	for(int i = n-2; i >= 0; i--) zerosR[i] += zerosR[i+1];

	for(int i = 0; i < n; i++){
		if(s[i] == '1') onesL[i] = 1;
	}
	for(int i = n-1; i >= 0; i--){
		if(s[i] == '1') onesR[i] = 1;
	}

	for(int i = 1; i < n; i++) onesL[i] += onesL[i-1];
	for(int i = n-2; i >= 0; i--) onesR[i] += onesR[i+1];		
	// show(s);
	// show(onesL);
	// show(zerosR);
	//case 1 000011111
	for(int i = 0; i < n-1; i++){
		// cout<<i<<" "<<(onesL[i])<<" "<<(zerosR[i+1])<<endl;
		w = min(onesL[i] + zerosR[i+1], w);
	}

	for(int i = 0; i < n-1; i++){
		w = min(zerosL[i] + onesR[i+1], w);
	}

	cout<<w<<endl;
	//case 2 1111100000
	// for(int i = 0; i < n; i++){

	// }
// 
	return 0;
}


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
  	string s;
  	cin>>s;
  	answer(s);
  }

}