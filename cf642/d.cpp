#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define ll long long int

void show(auto a){
  int i = 1;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

class Compare
{
public:
    bool operator() (pii a, pii b)
    {
    	int len1 = a.second - a.first;
    	int len2 = b.second - b.first;

    	if(len1 == len2){
    		return (a.first > b.first);
    	}

    	return len1<len2;

    }
};


int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
  	  priority_queue<pii, vector<pii>, Compare > pq; 
	  int n;
	  cin>>n;
	  vi a(n+1, 0);

	  int l = 1;
	  int r = n;
	  pq.push(pii(l, r));
	  int i = 0;
	  while(!pq.empty()){
	  	i++;
	  	pii top = pq.top();
	  	// cout<<top.first<<" "<<top.second<<endl;
	  	int mini = min(top.first, top.second);
	  	int maxi = max(top.first, top.second);
	  	if(abs(maxi - mini + 1) == 1){
	  		a[mini] = i;
	  		pq.pop();
	  	}else if(maxi - mini + 1 == 2){
	  		a[mini] = i;
	  		pq.pop();
	  		pq.push(pii(maxi, maxi));
	  	}else if((maxi - mini + 1)%2 != 0){
	  		a[(maxi + mini)/2] = i;
	  		pq.pop();
	  		pq.push(pii(mini, (maxi + mini)/2 - 1));
	  		pq.push(pii((maxi + mini)/2 + 1, maxi));
	  	}else if((maxi - mini + 1)%2 == 0){
	  		a[(maxi + mini - 1)/2] = i;
	  		pq.pop();
	  		pq.push(pii(mini, (maxi + mini - 1)/2 - 1));
	  		pq.push(pii((maxi + mini - 1)/2 + 1, maxi));
	  	}
	  }

	  show(a);
	
  }
  
}