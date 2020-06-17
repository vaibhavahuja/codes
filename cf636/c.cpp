#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>
#define NEGINF -10000000000
void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int answer(vi a){
	long long int i = 0;
	long long int ans = 0;
	a.push_back(0);
	for(long long int i = 0; i < a.size(); i++){
		if(a[i] == 0) break;
		long long int cur = NEGINF;	//to change by infinity minus
		if(a[i] < 0){
			while(a[i] < 0){
				cur = max(cur, a[i]);
				i++;
			}
			i--;
			ans += (cur == -NEGINF)?0:cur;
		}else{
			while(a[i]>0){
				cur = max(cur, a[i]);
				i++;
			}
			i--;
			ans += (cur == -NEGINF)?0:cur;
		}
		
	}
	return ans;
}


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	long long int n;
	  cin>>n;
	  vi a(n);
	  for(long long int i = 0; i < n; i++){
	  	cin>>a[i];
	  }
	  cout<<answer(a)<<endl;


  }
  
}