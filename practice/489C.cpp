#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

string show(vi a){
	int i =0;
	string ans = "";
	while(i < a.size()){
		// cout<<a[i]<<" ";
		ans += to_string(a[i]);
		i++;
	}
	return ans;
}

string getMax(int len, int sum){
	int numNine = sum/9;
	string ans = "";
	int rem = sum%9;
	while(numNine--) ans+= '9';
	if(rem != 0)ans += to_string(rem);
	if(ans.length() > len) return "-1";
	else{
		int q = len - ans.length();
		while(q--){
			ans+='0';
		}
	}
	if(ans == "0") return "0";
	if(ans[0] == '0') return "-1";
	return ans;
}

string getMin(int len, int sum){
	if(getMax(len, sum) == "-1") return "-1";
	vi ans(len, 0);
	ans[0] = 1;
	sum -= 1;
	int i = ans.size() - 1;
	while(sum > 0 && i > 0){
		if(sum >= 9) ans[i] = 9, sum-=9;
		else if(sum < 9) ans[i] = sum, sum = 0;
		i--;
	}
	if(i == 0 && sum != 0) ans[i] += sum;
	return show(ans);
}

int main(){
	int m, s;
	cin>>m>>s;
	cout<<getMin(m, s)<<" "<<getMax(m, s)<<endl;
}














