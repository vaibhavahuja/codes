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


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  int n;
	  cin>>n;
	  string s;
	  cin>>s;
	  int firstEight = -1;
	  for(int i = 0; i < s.length(); i++){
	  	if(s[i] == '8'){ firstEight = i; break;}
	  }

	  if(firstEight == -1){
	  	cout<<"NO"<<endl;
	  }
	  else if(n - firstEight >= 11){
	  	cout<<"YES"<<endl;
	  }else{
	  	cout<<"NO"<<endl;
	  }

  }
	

}