#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>
#define VAL 250000

int main(){
	int n;
	cin>>n;
	int x;
	for(int i = 0; i < VAL; i++){
		x = (n - i*4);
		if(x%7 == 0 && x>=0){
			for(int o = 0; o < i; o++){
				cout<<4;
			}
			x/=7;
			while(x--){
				cout<<7;
			}
			cout<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
  

}














