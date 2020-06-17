#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define pi 3.14159265358979323846
 
int main(){
  ios_base::sync_with_stdio(false);
  int n, m;
  cin>>n>>m;
  // vi a(n, 0);
  int sum=0;
  for(int i = 0; i < m; i++){
  	int x;
  	cin>>x;
  	sum += x;
  }

  if(n - sum < 0) cout<<-1<<endl;
  else cout<<(n-sum)<<endl;
 
}