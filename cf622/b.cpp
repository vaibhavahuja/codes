//should have given more thought to it; i was very close to the solution

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

int worst(int n, int x, int y){
	//finding worst
	//(x+y > n)and (x+y < n)
	int worst = -1;
	if(x+y <= n){
		worst = (x + y);
		if(x < worst || y < worst) worst--;
		return worst;
	}
	if(x + y > n){
		return n;
	}
}

int best(int n, int x, int y){
	if(x+y < n){
		return 1;
	}
	if(x + y > n && (x+y != 2*n)){
		int ans = (x+y - n);
		return (ans+1);
	}
	if(x + y == 2*n){
		return n;
	}
}


int main(){
	int t;
	cin>>t;
	int n, x, y;
	cin>>n>>x>>y;

	cout<<best(n, x, y)<<" "<<worst(n, x, y)<<endl;

  

}














