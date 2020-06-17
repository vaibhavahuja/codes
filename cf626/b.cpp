//got AC finally 

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}

void show(mii ta){
	for(auto i = ta.begin(); i != ta.end(); i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}

vp getDivisors(long long int a){
	vp ans;
	for(long long int i = 1; i*i <= a; i++){
		if(a%i == 0) ans.push_back(pii(i, a/i));
	}
	return ans;
}

long long int count(vi a, long long int k){
	//returns count of number of consecutive k one's in array a
	if(k > a.size()) return 0;
	for(long long int i = 1; i < a.size(); i++){
		a[i] += a[i-1];
	}

	long long int l = 0, r = k-1;
	long long int ans = 0;
	while(r<a.size()){
		if(l == 0){
			if(a[r] == r+1) ans++;
		}else{
			if(a[r] - a[l-1] == r-l+1) ans++;	
		}
		
		l++;
		r++;
	} 

	return ans;

}

int main(){
  ios_base::sync_with_stdio(false);
  long long int n, m, k;
  cin>>n>>m>>k;
  vi a(n), b(m);
  for(long long int i = 0; i < n; i++){
  	cin>>a[i];
  }
  for(long long int i = 0; i < m; i++){
  	cin>>b[i];
  }

  vp c = getDivisors(k);
  // show(c);
  // cout<<count(a, 2)<<endl;
  // cout<<count(b, 2)<<endl;

  mii tablen, tablem;
  for(long long int i = 0; i < c.size(); i++){
  	if(tablen.find(c[i].first) == tablen.end()){
  		tablen[c[i].first] = count(a, c[i].first);
  	}
  	if(tablen.find(c[i].second) == tablen.end()){
  		tablen[c[i].second] = count(a, c[i].second);
  	}

  	if(tablem.find(c[i].first) == tablem.end()){
  		tablem[c[i].first] = count(b,  c[i].first);
  	}
  	if(tablem.find(c[i].second) == tablem.end()){
  		tablem[c[i].second] = count(b,  c[i].second);
  	}
  }

  long long int finalAns = 0;
  // cout<<"below is table n"<<endl;
  // show(tablen);
  // cout<<"below is table m"<<endl;
  // show(tablem);
  
  for(long long int i = 0; i < c.size(); i++){
  	
  	
  	finalAns += tablen[c[i].first]*tablem[c[i].second];

  	finalAns += tablen[c[i].second]*tablem[c[i].first];
  	if(c[i].first  == c[i].second) finalAns -= tablen[c[i].first]*tablem[c[i].second];
  	

  }
  cout<<finalAns<<endl;


}