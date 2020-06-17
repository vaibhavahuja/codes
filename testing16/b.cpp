#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
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


bool isSquare(int a){
	int p = sqrt(a);
	if(p*p == a) return true;
	return false;
}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){int a, b;
  int c, d;
  cin>>a>>b>>c>>d;
  int l1 = a+c;
  int l2 = a+d;
  int w1 = b + c;
  int w2 = b+d;

  if(a == c && b + d == a) cout<<"YES"<<endl;
  else if(a == d && b + c == a) cout<<"YES"<<endl;
  else if(b == d && a + c == d) cout<<"YES"<<endl;
  else if(b == c && a + d == c) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  // if(a == c && b + c == a) cout<<"YES"<<endl;



  }
  

}