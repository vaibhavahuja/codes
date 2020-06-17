#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vc vector<char>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void answer(vi check, vc temp){
	//check has 313
	//temp has hel

	//removing 3's
	for(int i = 0; i < check.size(); i++){
		if(check[i] >= 3) check[i] = 2;
	}

	//taking care of 2's
	for(int i = 1; i < check.size(); i++){
		if(check[i-1] == 2 && check[i] == 2){
			check[i] = 1;
		}
	}
	string ans = "";
	for(int i = 0; i < temp.size(); i++){
		int q = check[i];
		char p = temp[i];
		while(q--){
			ans += p;
		}
	}

	cout<<ans<<endl;
	// show(check);
	// show(temp);


}

int main(){
	string s;
	cin>>s;
	s += '0';
	int q = 1;
	vi check;
	vc temp;
	for(int i = 1; i < s.length(); i++){
		if(s[i] == s[i-1]){
			q++;
		}else{
			check.push_back(q);
			temp.push_back(s[i-1]);
			q = 1;
		}
	}
	// show(check);
	// show(temp);
	answer(check, temp);

  

}














