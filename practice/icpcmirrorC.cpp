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
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  int n, k;
  cin>>n>>k;
  vi a(n, 0), b(n, 0);
  for(int i = 0; i < n; i++){
  	cin>>a[i];
  	if(a[i]%2 == 0) a[i] = 1;
  	else a[i] = 0;
  }

  for(int i = 0; i < n; i++){
  	cin>>b[i];
  	if(b[i]%2 == 0) b[i] = 1;
  	else b[i] = 0;
  }

  vi ap = a;
  vi bp = b;
  for(int i = 1; i < n; i++){
  	ap[i] += ap[i-1];
  	bp[i] += bp[i-1];
  }

  // show(a);
  // show(b);

  // show(ap);
  // show(bp);

  while(k--){
	  int x1, y1, x2, y2;
	  cin>>x1>>y1>>x2>>y2;
	  int minix = min(x1 - 1, x2 - 1);
	  int maxix = max(x1 - 1, x2 - 1);

	  int miniy = min(y1 - 1, y2 - 1);
	  int maxiy = max(y1 - 1, y2 - 1);

	  if(a[minix] == a[maxix] && b[miniy] == b[maxiy]){
	  	int ex;
	  	if(minix > 0){
		  	ex = ap[maxix] - ap[minix- 1];
		}else ex=ap[maxix];
		int ey;
		if(miniy > 0){
		  	ey = bp[maxiy] - bp[miniy- 1];
		}else ey = bp[maxiy];

		if((b[miniy] == 1 && (ey == maxiy - miniy + 1))||(b[miniy] == 0 && (ey == 0))){
			if((a[minix] == 1 && (ex == maxix - minix + 1))||(a[minix] == 0 && (ex == 0))){
				cout<<"YES"<<endl;
			}else cout<<"NO"<<endl;
		}else cout<<"NO"<<endl;
	  }else{
	  	cout<<"NO"<<endl;
	  }
  }

  


}