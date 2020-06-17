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


int main(){
  ios_base::sync_with_stdio(false);

  int n, m, k;
  cin>>n>>m>>k;

  vi x, y, xf, yf;
  int i=0;
  for(i=0;i<k;i++){
  	int e,w;
  	cin>>e>>w;
  	x.push_back(e);
  	y.push_back(w);
  }

  for(i=0;i<k;i++){
  	int e,w;
  	cin>>e>>w;
  	xf.push_back(e);
  	yf.push_back(w);
  }
  


  // int tu=0, td=0, tl=0,tr=0;
  string s = "";


  for(int i = 0; i < x.size(); i++){
  	int xt = x[i];
  	int yt = y[i];
  	int q = -1;
  	int u=0, d=0, l=0,r=0;

  	for(int j = 0; j < s.length(); j++){
  		if(s[j] == 'U') yt++;
  		else if(s[j] == 'D') yt--;
  		else if(s[j] == 'R') xt++;
  		else if(s[j] == 'L') xt--;
  		if(xt > n) xt--;
  		if(xt < 1) xt++;
  		if(yt > m) yt--;
  		if(yt < 1) yt++;

  		if(xt == xf[i] && yt == yf[i]) {q = 1; break;}
  	}
  	if(q == 1) continue;

  	if(yf[i] - yt > 0) u+= abs(yf[i] - yt);
  	else if(yf[i] - yt < 0) d+=abs(yf[i] - yt);
  	
  	if(xf[i] - xt > 0) r += abs(xf[i] - xt);
  	else if(xf[i] - xt > 0) l += abs(xf[i] - xt);

  	while(u--){
  		s += "U";
  	}
  	while(d--) s+= 'D';
  	while(r--) s+='R';
  	while(l--) s+= 'L';

  }

  cout<<s<<endl;


}