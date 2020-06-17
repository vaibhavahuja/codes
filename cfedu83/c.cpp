#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define mii map<unsigned long long int, unsigned long long int>

void show(auto a){
  unsigned long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<endl;
    i++;
  }
  cout<<endl;
}

string convertBasek(unsigned long long int x, unsigned long long int k){
	string s = "";

	while(x > 0){
		s += to_string(x%k);
		x/=k;
	}
	reverse(s.begin(), s.end());
	return s;
}



int main(){
	unsigned long long int t;
	cin>>t;
	while(t--){
		unsigned long long int n, k;
		cin>>n>>k;
		vector<string> ans;
		while(n--){
			unsigned long long int x;
			cin>>x;
			ans.push_back(convertBasek(x, k));
		}
		// show(ans);
		vs equalLength;
		unsigned long long int maxiL = 0;
		for(unsigned long long int i = 0; i < ans.size(); i++){
			maxiL = max(maxiL, (unsigned long long int)ans[i].length());
		}

		for(unsigned long long int i = 0; i < ans.size(); i++){
			string d;
			unsigned long long int q = maxiL - ans[i].length(); 
			while(q--){
				d += '0';
			}
			d += ans[i];
			equalLength.push_back(d);
		}

		show(equalLength);

		// vs check;
		int answq = 0;

		string check = "";
		for(unsigned long long int i = 0; i < equalLength[0].length(); i++){
			unsigned long long int p = 0;
			for(unsigned long long int j = 0; j < equalLength.size(); j++){
				p += (equalLength[j][i] - '0');
				if(p>9) answq = 1;
			}
			check += to_string(p);
		// ?	cout<<check<<endl;

		}
		// cout<<check<<endl;

		for(int i = 0; i < check.length(); i++){
			if(check[i] - '0' > 1) {answq = 1; break;}
		}
		if(answq == 1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;

	}
	

}














