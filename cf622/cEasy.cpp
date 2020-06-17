#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define mii map<long long int, long long int>

void show(vi a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

long long int sum(vi a){
	long long int i = 0;
	long long int ans = 0;
	while(i < a.size()){
		ans += a[i];
		i++;
	}
	return ans;
}


void answer(vi a){

	vi answer;
	long long int maxSum = -1;

	for(long long int i = 0; i < a.size(); i++){
		long long int maxIndex = i;
		vi p = a;
		long long int maxi = a[i];

		//go right
		if(i != a.size() - 1){
			for(long long int j = i+1; j < p.size(); j++){
				if(p[j] > maxi){
					p[j] = maxi;
				}else{
					maxi = p[j];
				}
			}

		}
		maxi = a[i];
		//go left

		if(i != 0){
			for(long long int j = i-1; j >= 0; j--){
				if(p[j] > maxi) p[j] = maxi;
				else maxi = p[j];
			}
		}
		
		if(maxSum < sum(p)){
			// show(p);
			answer = p;
			maxSum = sum(p);
		}

		// cout<<"value of a[i] is "<<a[i]<<endl;
		// cout<<"sum is "<<sum(p)<<" and p is ";
		// show(p);
	}

	show(answer);


}


int main(){
	long long int n;
	cin>>n;
	vi a;
	while(n--){
		long long int p;
		cin>>p;
		a.push_back(p);
	}
	// show(a);
	answer(a);
}














