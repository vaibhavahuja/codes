#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void show(vi a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

int answer(int aa, int bb, int cc){
	vi d = {aa, bb, cc};
	sort(d.begin(), d.end());

	// show(d);

	int a = d[2];
	int b = d[1];
	int c = d[0];

	int ans = 0;
	if(a > 0){
		ans+=1;
		a--;
	}
	if(b > 0){
		ans += 1;
		b--;
	}
	if(c > 0){
		ans += 1;
		c--;
	}


	if(a > 0 && b > 0){
		ans += 1;
		a--;
		b--;
	}

	if(a > 0 && c > 0){
		ans += 1;
		a--;
		c--;
	}

	if(c > 0 && b > 0){
		ans += 1;
		c--;
		b--;
	}

	if(a > 0 && b > 0 && c > 0){
		ans += 1;
		a--;
		b--;
		c--;
	}

	return ans;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		cout<<answer(a, b, c)<<endl;
	}
	
  

}














