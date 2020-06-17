
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,mi,i,m1;
	cin>>t;
	while(t--)
	{
		long long a[200001],m=10000000001;
		cin>>n>>k;
		k++;
		for ( i = 0; i < n; ++i)
			cin>>a[i];
		for ( i = 0; i+k <=n ; ++i)
		{
			if (a[i+k-1]-a[i]<m)
				m=a[i+k-1]-a[i],mi=i;
		}
		i=mi;
		cout<<(a[i]+a[k+i-1])/2<<endl;
		
	}
}
// #include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define pii pair<int, int>
// #define vp vector<pii>
// #define vs vector<string>
// #define mii map<int, int>
// #define ll long long
// #define ld long double


// void show(auto a){
//   int i = 0;
//   while(i < a.size()){
//     cout<<a[i]<<" ";
//     i++;
//   }
//   cout<<endl;
// }


// int main(){
//   ios_base::sync_with_stdio(false);
//   int t;
//   cin>>t;
//   while(t--){
//   	  int n, k;
// 	  cin>>n>>k;
// 	  ll a = 1e12;
// 	  vector<ll> v(n);
// 	  for(int i = 0; i < n; i++) cin>>v[i];
// 	  ll mi;
// 	  for(int i = 0; i + k<= n; i++){
// 	  	ll q = v[i+k-1] - v[i];
// 	  	a = min(a, q);
// 	  	if(a > q){
// 	  		a = q;
// 	  		mi = i;
// 	  	}
// 	  }  
// 	  ll aa = (v[mi+k-1] + v[mi])/2;
// 	  cout<<aa<<endl;


//   }
	  
// }