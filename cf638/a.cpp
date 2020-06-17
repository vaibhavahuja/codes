//got WA will see later

#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define pii pair<long long int, long long int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<long long int, long long int>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  vector<long long> a;
  a.push_back(2);
  for(long long int i = 1; i <= 30; i++){
  	a.push_back(a[i-1]*2);
  }
  // show(a);
  long long int n;
  cin>>n;
  while(n--){
  	long long int t;
  	cin>>t;
  	long long int m = 1;
  	long long int finalAns = 0;
    long long int q = 0;
    long long int b = 0;
    b += a[t-1];

    for(int i = 0; i < t/2 - 1; i++) b += a[i];

    for(int i = t/2-1; i < t-1; i++) q += a[i];
    
  	
    // show(a);
    // cout<<b<<" "<<q<<endl;




  	finalAns = abs(q - b);
  	cout<<finalAns<<endl;
  }
}