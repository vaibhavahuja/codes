//difficult
//need more time

#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int
#define ld long double
#define PI 3.1415926535



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
	  ld p;
	  cin>>p;
	  ld n = 2*p;
	  //n is even
	  ld everyAngle = 180 - ((n-2)/n)*180;
	  ld pw = everyAngle;
	  int sidesUp = (n-2)/2;
	  int sidesLeft = (sidesUp)/2;
	  cout<<pw<<" "<<sidesLeft<<endl;

	  ld ans = 0;
	  for(int i = 0; i < sidesLeft; i++){
	  	ld val =  cos((everyAngle*PI)/180);
	  	ans += val;
	  	everyAngle+=pw;
	  }
	  ld finalAns = ans*2;
	  cout<<fixed;
	  cout<<setprecision(10);
	  cout<<finalAns<<endl;
  }

}