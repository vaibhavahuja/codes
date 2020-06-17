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

void show(mii table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

string answer(vi a){
	int numOdd = 0, numEven = 0;
	for(int i = 0; i < a.size(); i++){
		if(a[i]%2 == 0) numEven++;
		else numOdd++;
	}

	if(numOdd%2 != 0) return "YES";
	if(numOdd%2 == 0 && numOdd > 0 && numEven > 0) return "YES";

	return "NO";
}



int main(){
  	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vi a;
		while(n--){
			int p;
			cin>>p;
			a.push_back(p);
		}
		cout<<answer(a)<<endl;
	}

}














