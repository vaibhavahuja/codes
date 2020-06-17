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

int answer(vi a){
	int sum = 0, m = 0, ans = 0, prevSum = 0;
	for(int i = 0; i < a.size(); i++){
		sum += a[i];
		prevSum = sum - a[i];
		if(sum < 0){
			m++;
		}
		if(sum == 0 && prevSum < 0){
			m++;
			ans += m;
			m = 0;
		}
	}

	return ans;
}

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  string s;
  cin>>s;
  // int n = s.length();
  vi a(n);
  int sum = 0;
  
  for(int i = 0; i < n; i++){
  	if(s[i] == '(') a[i] = 1;
  	else a[i] = -1;
  	sum += a[i];
  }

  if(sum != 0) cout<<-1<<endl;
  else cout<<answer(a)<<endl;
  

}