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
  int t;
  cin>>t;
  while(t--){
	  int n;
	  cin>>n;
	  vi marriedBoy(n+1, 0);
	  int marriedGirlLast = -1;
	  for(int i=0;i<n;i++){
	  	int k;
	  	cin>>k;
	  	int mini = 1e6;
	  	while(k--){
	  		int e;
	  		cin>>e;
	  		if(e < mini && marriedBoy[e] == 0) mini = e;
	  	}
	  	if(mini != 1e6){
	  		marriedBoy[mini] = 1;
	  	}else marriedGirlLast = (i+1);
	  }

	  if(marriedGirlLast == -1){
	  	cout<<"OPTIMAL"<<endl;
	  }else{
	  	cout<<"IMPROVE"<<endl;
	  	cout<<marriedGirlLast<<" ";
	  	for(int i = 1; i < n+1; i++){
	  		if(marriedBoy[i] == 0){
	  			cout<<i<<endl;
	  			break;
	  		}
	  	}
	  }
	  
  }
	  
  

}