#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

bool check(int Hy,int Ay,int Dy,int Hm,int Am,int Dm){
	int q = max(0, Am-Dy);
	int e = max(0, Ay-Dm);
	if(e==0 && Hm>0) return false;
	while(Hm > 0){
		Hm -= e;
		Hy -= q;
		if(Hm<=0 && Hy>0) return true;

	}
	if(Hm<=0 && Hy>0) return true;
	return false;
}

int main(){
  ios_base::sync_with_stdio(false);

  int Hy, Ay, Dy, Hm, Am, Dm, h, a, d;

  cin>>Hy>>Ay>>Dy;
  cin>>Hm>>Am>>Dm;
  cin>>h>>a>>d;
  int cost = 100000;
  // cout<<check(100, 100, 100, 1, 1, 1)<<endl;
  for(int i = 0; i<=1000;i++){
  	for(int j = 0; j<=200; j++){
  		for(int k = 0; k <= 200; k++){
  			if(check(Hy+i, Ay+j, Dy+k, Hm, Am, Dm)){
  				cost = min(cost, i*h + j*a + k*d);
  			}
  		}
  	}
  }
  cout<<cost<<endl;



}