#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define vi vector<double>
#define vs vector<string>
#define mii map<int, int>
#define PI 3.141592653589793238462643383279

void show(auto a){
  int i = 0;
  while(i < a.size()){
  	cout<<std::setprecision(6);
  	cout<<fixed;
    cout<<a[i]<<" ";
    i++;
  }
  cout<<endl;
}


int main(){
  ios_base::sync_with_stdio(false);
  vi angles;
  int n;
  cin>>n;
  while(n--){
  	double x,y;
  	cin>>x>>y;
  	double result;
  	result = (atan2 (y,x) * 180 / PI);
    angles.push_back(result);
  }
  if(angles.size() == 1){
    cout<<0<<endl;
    return 0;
  }
  sort(angles.begin(), angles.end());
  double maxx = DBL_MIN;
  angles.push_back(angles[0] + 360);
  for(int i = 1; i < angles.size(); i++){
    maxx = max(maxx, angles[i] - angles[i-1]);
  }

  cout << fixed << setprecision(10) << 360.0-maxx;

}