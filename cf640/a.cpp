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

void answer(string a){
	vs ans;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '0') continue;
		else{
			string t = "";
			t += a[i];
			int m = a.size() - i - 1;
			while(m--){
				t+= '0';
			}
			ans.push_back(t);
		}
	}
	cout<<ans.size()<<endl;
	show(ans);
}


int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  while(n--){
  	string s;
  	cin>>s;
  	answer(s);
  }

}