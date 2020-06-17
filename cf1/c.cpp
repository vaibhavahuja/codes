//got TLE i do know why. Will think of better solution later. 

#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define mip map<pii, int>

void show2(pii a){
	cout<<a.first<<" "<<a.second<<endl;
}


void show(mip table){
  for(auto i = table.begin(); i != table.end(); i++){
    show2(i->first);
  }
}


string answer(mip &table, pii a){
	int x = a.first;
	int y = a.second;

	if(table.empty()){
		table[a] = 0;
	}
	else if(table.find(a) == table.end()){
		table[a] = 0;
	}else table.erase(a);


	for(auto i = table.begin(); i != table.end(); i++){
		pii b = i->first;
		// show2(b);
		// cout<<"ab"<<endl;
		if(b.first == 1){
			if(table.find(make_pair(2, b.second + 1)) != table.end() || table.find(make_pair(2, b.second - 1)) != table.end() || table.find(make_pair(2, b.second)) != table.end()){
				// show(table);
				return "No";
			}
		}else if(b.first == 2){
			if(table.find(make_pair(1, b.second + 1)) != table.end() || table.find(make_pair(1, b.second - 1)) != table.end() || table.find(make_pair(1, b.second)) != table.end()){
				// show(table);
				return "No";
			}
		}
	}
	// show(table);
	return "Yes";
}

int main(){
	int n, q;
	cin>>n>>q;
	mip table;
	while(q--){
		pii a;
		cin>>a.first>>a.second;
		cout<<answer(table, a)<<endl;
	}
}














