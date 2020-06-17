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

int main(){
	int n, k;
	cin>>n>>k;


	if(n == 1){
		if(k == 0) cout<<1<<endl;
		else cout<<-1<<endl;
		return 0;
	}

	vi a(n);
	int p = n;
	if(p%2 != 0) p--;
	// if(p > 2)
	p -= 2;
	k -= p/2;

	a[0] = k;
	k *= 2;
	a[1] = k;
	if(k <= 0){
		cout<<-1<<endl;
		return 0;
	}
	k++;
	for(int i = 2; i < a.size(); i++){
		a[i] = k++;
	}

	show(a);



  

}














