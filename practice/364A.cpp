#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vs vector<string>
#define mii map<int, int>
#define vvi vector<vi>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}

void show2(vvi a){
	for(int i=0;i<a.size();i++)show(a[i]);
}

int countN(vi arr, int sum) 
{ 

    int n = arr.size();
    unordered_map<int, int> prevSum; 
  
    int res = 0; 
  
    int currsum = 0; 
  
    for (int i = 0; i < n; i++) { 
  
        currsum += arr[i]; 
  
        if (currsum == sum)  
            res++;         
  
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 
int main(){
  ios_base::sync_with_stdio(false);
  
  int c;
  cin>>c;
 	
  vvi a;
  string s;
  cin>>s;
  int numC=0;
  for(int i = 0; i < s.length(); i++){
  	vi b;
  	for(int j = 0; j < s.length(); j++){
  		b.push_back((s[i]-'0')*(s[j]-'0'));
  		if((s[i]-'0')*(s[j]-'0') == c)numC++;
  	}
  	a.push_back(b);
  }
  int ans = 0;
  for(int i=0;i<a.size();i++){
  	ans += countN(a[i], c);
  }
  cout<<ans*2-numC<<endl;

}