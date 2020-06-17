#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<pair<int, int>, string>
#define pss pair<string, string>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define mcv map<string, vp>



void show(vs a){
	int i = 0;
	while(i < a.size()){
		cout<<a[i]<<" ";
		i++;
	}
	cout<<endl;
}
void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first.first<<" "<<a[i].first.second<<" "<<a[i].second<<endl;;
    i++;
  }
  cout<<endl;
}
void show(mcv table){
	for(auto i = table.begin(); i != table.end(); i++){
		cout<<i->first<<" ";
		cout<<"below are values "<<endl;
		show(i->second);
	}
}

bool containsTry(string s){
	for(int i = 0; i < s.length()-2; i++){
		if(s[i] == 't' && s[i+1] == 'r' && s[i+2] == 'y') return true;
		else if(s[i] == ' ') continue;
		else return false;
	}
	return false;
}

bool containsThrow(string s){
	for(int i = 0; i < s.length() - s.length() - 4; i++){
		if(s[i] == 't' && s[i+1] == 'h' && s[i+2] == 'r' && s[i+3] == 'o' && s[i+4] == 'w') return true;
		else if(s[i] == ' ') continue;
		else return false;
	}
	return false;
} 
bool containsCatch(string s){
	for(int i = 0; i < s.length() - s.length() - 4; i++){
		if(s[i] == 'c' && s[i+1] == 'a' && s[i+2] == 't' && s[i+3] == 'c' && s[i+4] == 'h') return true;
		else if(s[i] == ' ') continue;
		else return false;
	}
	return false;
} 

string getException(string s){
	string exception = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			i++;
			while(s[i] != ')'){
				// cout<<s[i]<<" ";
				if(s[i] != ' ') exception += s[i];
				// cout<<exception<<" <-"<<endl;
				i++;
			}
			break;
		}
	}
	return exception;

}

pss extractCatch(string s){
	string exception = "";
	// for(int i = 0; i < s.length(); i++){
	// 	cout<<s[i]<<endl;
	// }
	// cout<<"ok"<<endl;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '('){
			i++;
			while(s[i] != ','){
				// cout<<s[i]<<" ";
				if(s[i] != ' ') exception += s[i];
				// cout<<exception<<" <-"<<endl;
				i++;
			}
			break;
		}
	}
	string message = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '"'){
			i++;
			while(s[i] != '"'){
				message += s[i];
				i++;
			}
			break;
		}
	}

	// cout<<exception<<"->"<<message<<endl;


	pair<string, string> ans = pair<string, string>(exception, message);
	return ans;

}

int main(){
  ios_base::sync_with_stdio(false);

  int n;
  cin>>n;
  vs a;
  for(int i= 0; i <= n; i++){
  	string s;
  	getline(cin, s);
  	a.push_back(s);
  }

  // show(a);



  // for(int i = 1; i < a.size(); i++){
  // 	cout<<containsTry(a[i])<<" "<<containsCatch(a[i])<<" "<<containsThrow(a[i])<<endl;
  // }
  stack <int> trial;
  mcv table;
  int th;
  string thException;
  for(int i = 1; i < a.size(); i++){
  	if(containsTry(a[i])) trial.push(i);
  	else if(containsCatch(a[i])){
  		int j = trial.top();
  		trial.pop();
  		string exception = extractCatch(a[i]).first;
  		string message = extractCatch(a[i]).second;
  		table[exception].push_back(pii(pair<int, int>(j, i), message));
  	}
  	else if(containsThrow(a[i])) th = i, thException = getException(a[i]);
  }

  if(table.find(thException) == table.end()){
  	cout<<"Unhandled Exception"<<endl;
  	return 0;
  }
  int ans = 0;
  string final = "check";
  for(int i = 0; i < table[thException].size(); i++){
  	if(table[thException][i].first.first > ans && table[thException][i].first.first < th && table[thException][i].first.second > th){
  		ans = table[thException][i].first.first;
  		final = table[thException][i].second;
  	}
  }
  if(ans == 0) cout<<"Unhandled Exception"<<endl;
  else cout<<final<<endl;


}