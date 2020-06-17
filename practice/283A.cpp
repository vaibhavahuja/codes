#include <bits/stdc++.h>
using namespace std;
#define vi vector<float>
#define vs vector<string>
#define mii map<float, float>

void show(auto a){
  float i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


void average(float a, float b){
	float c = (float)a/(float)b;
	
	cout<<fixed;
	cout<<setprecision(9);
	cout<<c<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);

  float n;
  cin>>n;
  vi val(n+2);
  vi s(n+2);
  float sum = 0;
  float pofloater = 0;

  while(n--){
  	float t;
  	cin>>t;
  	// cout<<"pofloater is at "<<pofloater<<endl;

  	if(t == 1){
  		float a, b;
  		cin>>a>>b;
  		s[a-1] += b;
  		sum += b*a;
  	}else if(t == 2){
  		float q;
  		cin>>q;
  		pofloater++;
  		val[pofloater] += q;
  		sum += val[pofloater];
  	}else if(t == 3){
  		sum -= val[pofloater];
  		sum -= (s[pofloater]);
  		s[pofloater - 1] += s[pofloater];
  		s[pofloater] = 0;
  		val[pofloater] = 0;
  		pofloater--;
  	}
  	average(sum, (pofloater+1));
  }
}