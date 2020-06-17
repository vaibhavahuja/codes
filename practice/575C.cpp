//robot breakout

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
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}

pii interval(vp a){
	pii ans(a[0].first, a[0].second);
	for(int i = 1; i < a.size(); i++){
		pii b = ans;
		pii c = a[i];

		if(b.first > c.second || c.first > b.second) return pii(-1e7, -1e7);
		else{
			ans.first = max(b.first, c.first);
			ans.second = min(b.second, c.second);
		}
	}
	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);
  int q;
  cin>>q;
  while(q--){
  	  int n;
	  cin>>n;
	  vi x(n), y(n);
	  vi left(n), top(n), down(n), right(n);
	  for(int i = 0; i < n; i++){
	  	cin>>x[i]>>y[i]>>left[i]>>top[i]>>right[i]>>down[i];
	  }

	  vp inx, iny;

	  for(int i = 0; i < n; i++){
	  	pii xx(x[i], x[i]);
	  	if(left[i] == 1) xx.first = -1e5;
	  	if(right[i] == 1) xx.second = +1e5;
	  	inx.push_back(xx);
	  }

	  for(int i = 0; i < n; i++){
	  	pii yy(y[i], y[i]);
	  	if(down[i] == 1) yy.first = -1e5;
	  	if(top[i] == 1) yy.second = +1e5;
	  	iny.push_back(yy);
	  }
	  // cout<<"below is intervals of x L - R"<<endl;
	  // show(inx);
	  // cout<<"below is intervals of y D-T "<<endl;
	  // show(iny);
	  pii ansx = interval(inx);
	  pii ansy = interval(iny);
	  if(ansx == pii(-1e7, -1e7) || ansy == pii(-1e7, -1e7)) cout<<0<<endl;
	  else{
	  	cout<<1<<" "<<ansx.first<<" "<<ansy.first<<endl;
	  }

	}
  
  // cout<<ansx.first<<" "<<ansx.second<<endl;
  // cout<<ansy.first<<" "<<ansy.second<<endl;



}