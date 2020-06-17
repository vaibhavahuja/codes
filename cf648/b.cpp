#include <bits/stdc++.h>
using namespace std;
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){

    int n;
    cin>>n;
    vector<int> pehle(n), second(n);
    for(int i = 0 ;i < n; i++) cin>>pehle[i];
    for(int i = 0; i < n; i++) cin>>second[i];
    // for(int i = 0; i < n; i++) a[i] = pii(pehle[i], second[i]);
    vector<int> pehleSort = pehle;
    sort(pehleSort.begin(), pehleSort.end());

    if(pehleSort == pehle){
      cout<<"Yes"<<endl;
    }else{
        int zeros = 0, ones = 0;
      for(int i = 0; i < second.size(); i++){
        if(second[i] == 0) zeros++;
        else ones++;
      }
      if(ones > 0 && zeros > 0) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }

}