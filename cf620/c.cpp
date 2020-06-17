#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mip map<long long int, pii>
#define pii pair<long long int, long long int>
#define vp vector<pii>

void show(vp a){
	long long int i = 0;
	while(i < a.size()){
		cout<<"("<<a[i].first<<","<<a[i].second<<"), ";
		i++;
	}
}

void show(pii a){
	cout<<a.first<<" "<<a.second<<endl;
}

void show(mip a){
	for(auto i = a.begin(); i != a.end(); i++){
		cout<<i->first<<" ";
		show(i->second);
	}
}


void answer(mip table,int m){
	pii tempRange;
	tempRange.first = m;
	tempRange.second = m;
	long long int ti = 0;

	for(auto i = table.begin(); i != table.end(); i++){
		long long int t, l, h;
		t = i->first;
		l = i->second.first;
		h = i->second.second;
		long long int time = t - ti;
		ti = t;
		tempRange.first -= time;
		tempRange.second += time;
		tempRange.first = max(tempRange.first, l);
		tempRange.second = min(tempRange.second, h);
		if(tempRange.first > h || tempRange.second < l){
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
	return;

}

int main(){
	long long int q;
	cin>>q;

	while(q--){
		long long int n, m;
		cin>>n>>m;
		mip table;
		while(n--){
			long long int t, l, h;
			cin>>t>>l>>h;
			pii wq;
			wq.first = l;
			wq.second = h;
			if(table.find(t) != table.end()){
				table[t].first = max(l, table[t].first);
				table[t].second = min(h, table[t].second);
			}else table[t] = wq;
		}
		answer(table, m);
	}

}














