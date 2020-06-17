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

string answer(string s){
	int cntone = 0, cntzero = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '0') cntzero++;
		else cntone++;
	}
	if(cntone == 0 || cntzero == 0) return s;

	string t = "";
	while(cntzero--) t += "01";
	while(cntone--) t += "01";

	return t;

}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	string s;
  	cin>>s;
	cout<<answer(s)<<endl;
  }
}