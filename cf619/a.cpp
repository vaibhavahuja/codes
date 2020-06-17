#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

string answer(string a, string b, string c){
	for(int i = 0; i < a.length(); i++){
		if(a[i] == b[i] && a[i] != c[i]) return "NO";
		if(a[i] != c[i] && b[i] != c[i]) return "NO";
	}
	return "YES";
}



int main(){

  int t;
  cin>>t;
  while(t--){
  	string a, b, c;
  	cin>>a>>b>>c;
  	cout<<answer(a, b, c)<<endl;
  }

}














