#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
	int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" "; 
		i++;
	}
	cout<<endl;
}

vi forward(string s, int a){
	vi f(s.length(), 0);
	int q = 0;
	for(int i = 0; i < s.length(); i++){
		int p = s[i] - '0';
		q = (q*10 + p)%a;
		if(q == 0) f[i] = 1;
	}
	return f;
}

// int power(int j, int a){
// 	int ans = 1;
// 	while(j--){
// 		ans = (ans*10)%a;
// 	}
// 	return ans;
// }

vi reverse(string s, int a){
	vi r(s.length(), 0);
	int q = 0;
	int j = 0;
	int m = 1;
	for(int i = s.length() - 1; i >= 0; i--){
		int p = s[i] - '0';
		q = (p*m + q)%a;
		m*=10;
		m%=a;
		j++;
		if(q == 0 && p != 0) r[i] = 1;
	}
	return r;
}

void answer(vi f, vi r, string s){
	int split = -1;
	string ans = "";
	for(int i = 0; i < s.length()-1; i++){
		if(f[i] == 1 && r[i+1] == 1){
			ans = "YES";
			split = i;
		}
	}
	if(ans == "YES"){
		cout<<"YES"<<endl;
		cout<<s.substr(0, split+1)<<endl;
		cout<<s.substr(split+1)<<endl;
		return;
	}

	cout<<"NO"<<endl;
}


int main(){

	string s;
	cin>>s;
	int a, b;
	cin>>a>>b;

	vi f = forward(s, a);
	vi r = reverse(s, b);

	answer(f, r, s);


}














