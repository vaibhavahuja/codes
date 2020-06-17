#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define msi map<string, int>

void show(vs a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(msi table){
  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->first<<" "<<i->second<<endl;
  }
}

bool isPalin(string s){
	string p = s;
	reverse(s.begin(), s.end());
	return (p==s);
}

void answer(vs data, msi table,	vs palin){
	vs first;
	vs second;
	int len = 0;
	for(int i = 0; i < data.size(); i++){
		string p = data[i];
		reverse(p.begin(), p.end());
		int q = min(table[data[i]], table[p]);
		while(q--){
			first.push_back(data[i]);
			second.push_back(p);
			table[data[i]] -= 1;
			table[p] -= 1;
		}
	}

	// show(first);
	// show(second);
	// show(palin);
	//constructing the string
	string ansL = "";
	string ansR = "";
	msi palinTable;

	//making the palindromic string



	for(int i = 0; i < palin.size(); i++){
		palinTable[palin[i]] += 1;
	}

	//I unneccessarily made it such a long solution
	string palinL = "";
	string palinR = "";
	string leftOverPalin = "";
	for(auto i = palinTable.begin(); i!= palinTable.end(); i++){
		if(i->second%2 == 0){
			int m = i->second;
			m/=2;
			while(m--){
				palinL += i->first;
				palinR += i->first;
			}
			i->second = 0;
		}else if(i->second%2!=0){
			int m = i->second;
			m/=2;
			while(m--){
				palinL += i->first;
				palinR += i->first;
			}
			i->second = 1;
		}
	}
	for(auto i = palinTable.begin(); i!= palinTable.end(); i++){
		if(i->second == 1){
			leftOverPalin += i->first;
			break;
		}
	}



	for(int i = 0; i < first.size(); i++){
		ansL += first[i];
		reverse(second[i].begin(), second[i].end());
		ansR += second[i];
	}
	string palindromicString = palinL + leftOverPalin + palinR;
	int ansLen = ansL.length() + palindromicString.length() + ansR.length();
	cout<<ansLen<<endl;
	reverse(ansR.begin(), ansR.end());
	cout<<ansL<<palindromicString<<ansR<<endl;
}



int main(){
	int n, m;
	cin>>n>>m;
	vs data;
	msi table;
	vs palin;
	while(n--){
		string q;
		cin>>q;
		if(!isPalin(q)){
			data.push_back(q);
			table[q] += 1;
		}else palin.push_back(q);
		
	}

	answer(data, table, palin);

  

}














