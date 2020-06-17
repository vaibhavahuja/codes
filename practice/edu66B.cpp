#include<bits/stdc++.h>

using namespace std;

int main(){
  long long int i,j,k,n,t,add=0;
  vector<long long int> m;
  m.push_back(1);
  cin>>t;
  stack<long long int> st;
  while(t--){
    string s;
    cin>>s;
    //cout<<add<<endl;
    if(s=="add"){
      if(m.size()>1){
        cout<<"OVERFLOW!!!";
        return 0;
      }
      add=m[m.size()-1]+add;
    }
    else if(s=="for"){
      cin>>n;
      if(m[m.size()-1]>pow(10,16)){
        m.push_back(1);
      }
      m[m.size()-1]*=n;
      st.push(n);
    }
    else if(s=="end"){
      m[m.size()-1]/=st.top();
      if(m[m.size()-1]==1&&m.size()>1)
        m.pop_back();
      st.pop();
    }
    if(add>pow(2,32)-1){
      cout<<"OVERFLOW!!!";
      return 0;
    }
  }
  cout<<add;
  return 0;
}