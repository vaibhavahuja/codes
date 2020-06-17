#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define mii map<int, int>

void answer(int w, string s){
	int len = w;
	if(w == 1){ cout<<-1<<endl; return;}
	string temp = "";
	//check for 2
	for(int i = 0; i < s.length(); i++){
		temp = "";
		for(int j = i; j < i+2; j++){
			temp += s[j];
		}
		// cout<<temp<<endl;
		sort(temp.begin(), temp.end());
		if(temp == "LR" || temp == "DU"){
			cout<<i+1<<" "<<i+2<<endl;
			return;
		}
	}

	for(int i = 0; i < s.length(); i++){
		temp = "";
		for(int j = i; j < i+4; j++){
			temp += s[j];
		}
		// cout<<temp<<endl;
		sort(temp.begin(), temp.end());
		if(temp == "DLRU"){
			cout<<i+1<<" "<<i+4<<endl;
			return;
		}
	}

	reverse(s.begin(), s.end());


	for(int i = 0; i < s.length(); i++){
		temp = "";
		for(int j = i; j < i+4; j++){
			temp += s[j];
		}
		// cout<<temp<<endl;
		sort(temp.begin(), temp.end());
		if(temp == "DLRU"){
			cout<<(len - (i+4) + 1)<<" "<<(len - (i+1) + 1)<<endl;
			return;
		}
	}


	for(int i = 0; i < s.length(); i++){
		temp = "";
		for(int j = i; j < i+2; j++){
			temp += s[j];
		}
		// cout<<temp<<endl;
		sort(temp.begin(), temp.end());
		if(temp == "LR" || temp == "DU"){
			cout<<(len - (i+2) + 1)<<" "<<(len - (i+1) + 1)<<endl;
			return;
		}
	}




	cout<<"-1"<<endl;
	return;

}



int main(){
	int t;
	cin>>t;
	while(t--){
		int w;
		cin>>w;
		string s;
		cin>>s;
		answer(w, s);
	}
  

}














