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

// AAABAC
// 012010
// AAACAAAA
// 01201233
//lps is longest proper prefix which is also suffix
//proper prefix means prefix without all characters (ABC) -> "" "A""AB"

vi makeLPS(string t){
	int n = t.length();
	vi a(n, 0);
	int i = 1, j = 0;
	while(i < n){
		if(t[i] == t[j]){
			j++;
			a[i] = j;
			i++;
		}else{
			if(j == 0) i++;
			else j = a[j-1];
		}
	}
	return a;
}



void kmp(string s, string t){
	//we will search t in s
	int i = 0, j = 0;
	vi a = makeLPS(t);
	while(i < s.length()){
		if(s[i] == t[j]) i++, j++;
		if(j == t.length()){
			cout<<"found a match at "<<i-j<<endl;
			j = a[j-1];
		}else if(s[i] != t[j] && i < s.length()){
			if(j == 0) i++;
			else j = a[j-1];
		}
	}

}


int main(){
  ios_base::sync_with_stdio(false);

  string s, t;
  cin>>s>>t;
  kmp(s, t);

}