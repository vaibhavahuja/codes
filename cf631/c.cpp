#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pi pair<int, int>
#define ppi pair<int, pi>
#define vp vector<ppi>


void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<"("<<a[i].second.first<<" "<<a[i].second.second<<")";
    i++;
  }
  cout<<endl;
}
void show(vi a){
	int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" ";
		i++;
	}
	cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  int n, m;
  cin>>n>>m;
  vp a;
  for(int i = 0; i < m; i++){
  	int c;
  	cin>>c;
  	pi d = make_pair(1, n-c+1);
  	ppi e = make_pair(c, d);
  	a.push_back(e);
  }

  sort(a.begin(), a.end());
  show(a);
  vi b(n, 0);
  int p = 1;
  for(int i = 0; i < a.size(); i++){
  	cout<<p<<" ";
  	p += a[i].first - 1;
  }


g

}