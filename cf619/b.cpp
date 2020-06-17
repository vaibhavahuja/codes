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

int getAvg(vi a){
	int sum = 0;
	int values = 0;
	for(int i = 0; i < a.size(); i++){
		if(i == 0 && a[i] != -1 && a[i+1] == -1) sum+=a[i], values++; 
		else if(i == a.size()-1 && a[i] != -1 && a[i-1] == -1) sum+=a[i], values++;
		else if(a[i] != -1 && (a[i-1] == -1 || a[i+1] == -1)) sum+=a[i], values++;
	}
	if(values == 0) return 0;
	cout<<sum<<" "<<values<<endl;
	return sum/values;
}

// int getAvg(vi a){
// 	int sum = 0;
// 	int values = 0;
// 	for(int i = 0; i < a.size(); i++){
// 		if(a[i] != -1) sum += a[i], values++;
// 	}
// 	if(values == 0) return 0;
// 	return sum/values;
// }


int calC(vi a, int k){
	int minDiff = 0;
	for(int i = 1; i < a.size(); i++){
		if(a[i-1] == -1) a[i-1] = k;
		if(a[i] == -1) a[i] = k;
		minDiff = max(minDiff, abs(a[i] - a[i-1]));
	} 
	return minDiff;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi a(n);
		for(int i = 0; i < n; i++){
			cin>>a[i];
		}
		if(calC(a, getAvg(a)) < calC(a, getAvg(a) + 1)) cout<<calC(a, getAvg(a))<<" "<<getAvg(a)<<endl;
		else cout<<calC(a, getAvg(a) + 1)<<" "<<getAvg(a) + 1<<endl;

	}
	
}














