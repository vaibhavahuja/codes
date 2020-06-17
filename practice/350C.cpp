#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define vip vector<pair<int, pii>>
 
// void show(vp a){
//   int i = 0;
//   while(i < a.size()){
//   	cout<<a[i].first.
//   }
//   cout<<"\n";
// }
 
void path(pii init, pii dest){
	pii d;
	d.first = dest.first - init.first;
	d.second = dest.second - init.second;
 
	int x1;
	char x2 = '0';
 
	x1 = abs(d.first);
	x2 = (d.first<0)?'L':'R';
 
	int y1;
	char y2 = '0';
 
	y1 = abs(d.second);
	y2 = (d.second < 0)?'D':'U';
 
	if(x1 != 0){
		cout<<"1 "<<x1<<" "<<x2<<"\n";
	}
	if(y1 != 0){
		cout<<"1 "<<y1<<" "<<y2<<"\n";
	}
}
 
 
bool sortByManhattan(const pii &a, const pii &b){
	return((abs(a.first)+abs(a.second)) < abs((b.first)+abs(b.second)));
}
 
void answer(vip a){
	if(a.size() == 0) return;
	pii init;
	init.first = 0;
	init.second = 0;
	for(int i = 0; i < a.size(); i++){
		path(init, a[i].second);
		cout<<2<<"\n";
		path(a[i].second, init);
		cout<<3<<"\n";
	}
}
 
 
int main(){
 	cin.tie(0)->sync_with_stdio(0);
	int t;
	int ans = 0;
	cin>>t;
	vip first(t);
	for(int i = 0; i < t; i++){
		int a, b;
		cin>>a>>b;
		if(a != 0 && b != 0) ans += 6;
		else if(a == 0 && b != 0) ans += 4;
		else if(a != 0 && b == 0) ans += 4;
		else if(a == 0 && b == 0) ans += 2;
 
		pii temp = make_pair(a, b);
		first[i].second = (temp);
		first[i].first = abs(a)+abs(b);
	}
 
	sort(first.begin(), first.end());
	cout<<ans<<"\n";
	answer(first);
 
 
}