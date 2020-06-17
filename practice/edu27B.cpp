#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll unsigned long long

void show(auto a, int len){
  int i = 0;
  while(i < len){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}
vi a(10, 0);
vi b(6, 0);
int q = 10;
void all(int i){
	if(i == 6){
		if(q > 1 && a[0]+a[1]+a[2] == a[3]+a[4]+a[5]){
			int p = 0;
			for(int i = 0; i < 6; i++){
				if(a[i] != b[i]) p++;
			}
			q = min(p, q);	
		}
		

		return;
	}
	for(int j = 0; j <= 9; j++){
		a[i] = j;
		all(i+1);
	}
}

int main(){
  ios_base::sync_with_stdio(false);
  string s;
  cin>>s;
  for(int i = 0; i < 6; i++) b[i] = s[i] - '0';
  all(0);
  cout<<q<<endl;
}