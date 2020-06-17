#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define pii pair<int, int>
#define vp vector<pii>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<","<<a[i].second<<" ";
    i++;
  }
  cout<<endl;
}

bool ans(int x1, int y1, int x2, int y2){
	
	int e = y1*y2;
	if(e == 0) return false;
	int w = x1*x2;
	if(w == 0) return false;
	if(e==w){
		y2 *= -1;
		if(x2 == x1 || y2 == y1) return false;
		return true;
	}
	return false;
}




int main(){
  ios_base::sync_with_stdio(false);
  int a, b;
  cin>>a>>b;

  vp pa, pb;
  for(int i = 0; i<=(a);i++){
  	for(int j = 0; j <= (a);j++){
  		if(i*i + j*j == a*a) pa.push_back(make_pair(i, j));
  	}
  }
  
  for(int i = 0; i<=(b);i++){
  	for(int j = 0; j <= (b);j++){
  		if(i*i + j*j == b*b) pb.push_back(make_pair(i, j));
  	}
  }

  // show(pa);
  // show(pb);
  // cout<<ans(3, 4, 3, 4)<<endl;
  for(auto i = 0; i < pa.size(); i++){
  	for(auto j = 0; j < pb.size(); j++){
  		if(ans(pa[i].first, pa[i].second, pb[j].first, pb[j].second)){
  			cout<<"YES"<<endl;
  			cout<<0<<" "<<0<<endl;
  			cout<<pa[i].first<<" "<<pa[i].second<<endl;
  			cout<<pb[j].first<<" "<<-1*pb[j].second<<endl;
  			return 0;	
  		}
  	}
  }

  cout<<"NO"<<endl;

}