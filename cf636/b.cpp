//wont submit now
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
  
}


void ans(int n){
	vi a(n/2, 0);
	vi b(n/2, 0);

	for(int i = 0; i < n/2; i++){
		a[i] += (i+1)*2;
		b[i] += (a[i] - 1);
	}
	b[n/2 - 1] = a[n/2 - 1] + a.size() - 1;
	show(a);
	show(b);
	cout<<endl;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  while(n--){
  	int a;
  	cin>>a;
  	if((a/2%2) == 0){
  		cout<<"YES"<<endl;
  		ans(a);
  	}else{
  		cout<<"NO"<<endl;
  	}
  }

}