#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pi pair<char, char>
#define vp vector<pi>
#define vs vector<string>
#define mii map<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

  

int lps(string str) 
{ 
   int n = str.length(); 
   int i, j, cl; 
   int L[n][n];  
  
   for (i = 0; i < n; i++) 
      L[i][i] = 1; 
  
    for (cl=2; cl<=n; cl++) 
    { 
        for (i=0; i<n-cl+1; i++) 
        { 
            j = i+cl-1; 
            if (str[i] == str[j] && cl == 2) 
               L[i][j] = 2; 
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]); 
        } 
    } 
  
    return L[0][n-1]; 
} 
  


int main(){
  ios_base::sync_with_stdio(false);

  int t;
  cin>>t;
  while(t--){
    int n;
  cin>>n;
  vector<char> in(n);

  for(int i = 0 ;i < n; i++){ 
    // char p = "";
    int s;
    cin>>s;
    in[i] = s + 'a' - 1;
  }
  
  vp a;
  for(int i = 1; i<= 26; i++){
    for(int j = i; j <= 26; j++){
        a.push_back(make_pair('a' + i - 1, 'a' + j - 1));
    }
  }

  vs check;

  

  for(int i = 0; i < a.size(); i++){
    string s= "";
    for(int j = 0; j < in.size(); j++){
        if(in[j] == a[i].first || in[j] == a[i].second) s += in[j];
    }
    check.push_back(s);
  }

  // show(check);
  int answer = 0;

  for(int i = 0; i < check.size(); i++){
    
    if(check[i].size() != 0) answer = max(answer, lps(check[i]));
  }

  cout<<answer<<"\n";
  
  }
  
}