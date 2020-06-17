#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define si stack<int>
#define qi queue<int>
#define di deque<int>



void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show(si &s, qi &q, di &d, int a){
	int m = 0;
	string t = "";
	if(!s.empty()){
		m++;
		t += " popStack";
		s.pop();
	}
	if(!q.empty()){
		m++;
		t += " popQueue";
		q.pop();
	}
	if(!d.empty()){
		if(d.front()>=d.back()){
			m++;
			t += " popFront";
			d.pop_front();
		}else{
			m++;
			t += " popBack";
			d.pop_back();
		}
	}

	cout<<m<<t<<endl;
}


void push(si &s, qi &q, di &d, int a){
	if(s.empty()) {s.push(a); cout<<"pushStack"<<endl;return;}
	else if(q.empty()) {q.push(a);cout<<"pushQueue"<<endl; return;}
	else if(d.empty()) {d.push_front(a); cout<<"pushFront"<<endl;return;}

	int topStack = s.top();
	int topQueue = q.front();
	int frontDeque = d.front();
	int backDeque = d.back();
	int mini = 1e6;
	mini = min(topStack, mini);
	mini = min(topQueue, mini);
	mini = min(frontDeque, mini);
	mini = min(backDeque, mini);

	if(mini == topStack) {s.push(a); cout<<"pushStack"<<endl;}
	else if(mini == topQueue){ q.push(a); cout<<"pushQueue"<<endl;}
	else if(mini == frontDeque){ d.push_front(a); cout<<"pushFront"<<endl;}
	else if(mini == backDeque){ d.push_back(a); cout<<"pushBack"<<endl;}
}


int main(){
  ios_base::sync_with_stdio(false);

  si s;
  qi q;
  di d;

  int n;
  cin>>n;
  while(n--){
  	int a;
  	cin>>a;
  	if(a == 0){
  		show(s, q, d, a);
  	}else{
  		push(s, q, d, a);
  	}
  }
}