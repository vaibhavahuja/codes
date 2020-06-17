#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
#define pi 3.14159265358979323846

#define mii map<int, int>
 
int main(){
  ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  mii table;
  for(int i = 1; i <= n; i++) table[i] = 0;
  for(int i = 1; i < n; i++){
    int x;
    cin>>x;
    table[x] += 1;
  }

  for(auto i = table.begin(); i != table.end(); i++){
    cout<<i->second<<endl;
  }

  
}