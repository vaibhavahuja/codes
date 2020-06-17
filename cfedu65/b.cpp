#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define mip map<int, pii>

// will write a checker

void show(auto a){
  int i = 0;
  cout<<"! ";
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);

  vi a = {4, 8, 15, 16, 23, 42};
  vi check2;
  mip table;
  for(int i = 0; i < a.size(); i++){
  	for(int j = i+1; j < a.size(); j++){
  		check2.push_back(a[i]*a[j]);
  		// cout<<a[i]*a[j]<<endl
  		table[a[i]*a[j]] = pii(a[i], a[j]);
  	}
  }
  // sort(check2.begin(), check2.end());
  // show(check2);

  // mip table2;

  cout<<"? "<<1<<" "<<2<<endl;
  int ab;
  cin>>ab;

  pii firstNum = pii(table[ab].first, table[ab].second);
  // cout<<" first can be "<<firstNum.first<<" "<<firstNum.second<<endl;  
  // pii secondNum = pii(table[ab].first, table[ab].second);


  vi final(6, 0);

  cout<<"? "<<1<<" "<<3<<endl;
  int ac;
  cin>>ac;

  pii check = table[ac];
  // cout<<"ac is "<<check.first<<" "<<check.second<<endl;

  if(check.first == firstNum.first || check.second == firstNum.first){
  	final[0] = firstNum.first;
  }else{
  	final[0] = firstNum.second;
  }

  final[1] = ab/final[0];
  final[2] = ac/final[0];

  cout<<"? "<<4<<" "<<4<<endl;
  int dd;
  cin>>dd;
  final[3] = sqrt(dd);

  cout<<"? "<<4<<" "<<5<<endl;
  int de;
  cin>>de;
  final[4] = de/final[3];

  // show(final);
  mii table3;
  for(int i = 0; i < 5; i++) table3[final[i]] = 1;
  
  for(int i =0; i < 6; i++){
  	if(table3.find(a[i]) == table3.end()){
  		final[5] = a[i];
  		break;

  	}
  }

  show(final);






}

// 4, 8, 15, 16, 23, 42
// 42, 23, 16, 15, 8, 4
// p