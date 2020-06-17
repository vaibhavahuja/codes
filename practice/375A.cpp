#include <bits/stdc++.h>
using namespace std;
#define vi vector<long long int>
#define vs vector<string>
#define mii map<long long int, long long int>
#define pi pair<long long int, long long int>
#define vp vector<pi>

void show(auto a){
  long long int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<","<<a[i].second;
    i++;
  }
  cout<<endl;
}
void show(mii table){
	for(auto i = table.begin(); i != table.end(); i++){
		cout<<i->first<<' '<<i->second<<endl;
	}
}

bool contains(long long int i){
	long long int a = 0, b = 0, c = 0, d = 0;
	while(i > 0){
		long long int e = i%10;
		if(e == 1) a = 1;
		else if(e == 6) b = 1;
		else if(e == 8) c = 1;
		else if(e == 9) d = 1;
		i/=10;
	}
	return (a&b&c&d);
}

int mod(string num) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %7; 
  
    return res; 
} 


int main(){
  ios_base::sync_with_stdio(false);
  long long int t = 0;
  // vp a;
  mii table;
  for(long long int i = 1000; i <= 9999; i++){
  	if(contains(i)) table[i%7] = i;
  }

  string s;
  // show(table);
  
  cin>>s;

  string p = "";
  string zeros = "";
  map<char, long long int> table2;
  for(long long int i = 0; i < s.length(); i++){
  	if((s[i] == '1' || s[i] == '6' || s[i] == '8' || s[i] == '9') && (table2.find(s[i]) == table2.end())){
  		table2[s[i]] = 1;
  	}else if(s[i] == '0') zeros+=s[i];
  	else p += s[i]; 
  }
  string ew = p+ "0000";
  long long int d = mod(ew);
  long long int e = d%7;
  // if(ew[0])
  cout<<p<<table[(7-d%7)%7]<<zeros<<endl;
  // cout<<p<<" "<<zeros<<endl;




  
}