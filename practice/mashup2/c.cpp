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


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	string s1, s2;
  	cin>>s1>>s2;
  	int i = 0, j = 0;
  	while(i < s1.size() && j < s2.size()){
  		if(s1[i] == s2[j]){
  			i++;
  			j++;
  		}else{
  			i++;
  		}
  	}
  	if(j == s2.size()){
  		cout<<"YES"<<endl;
  	}else cout<<"NO"<<endl;

  }
  

  

}