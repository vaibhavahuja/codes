//could not solve it although it was very basic
//idk whats wrong w me but i need to practise

#include <iostream>
#include <map>
using namespace std;
#define vi vector<int>
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

int ans(int n){
	 mii table;
	 for(int i = 0; i <= n; i++){
	  	for(int j = i+1; j <= n; j++){
	  		for(int k = j+1; k <= n; k++){
	  			if(i != j && i != k)table[i+j+k] += 1;	
	  		}	
	  	}
	  }

 	return (int) table.size();	
}
int main(){
  ios_base::sync_with_stdio(false);
  mii table;
  for(int i = 3; i<= 20; i++) cout<<i<<" "<<ans(i)<<endl;

}