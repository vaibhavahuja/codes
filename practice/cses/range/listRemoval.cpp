// 2 6 1 4 2
// 1 2 3 4 5
//     1 1 1
// 1 1 2 2 3
// 1 2 3 3 4

// //
// get(3)-> 1 
// 3-> end (add +1);
// get(1)-> 2
// 1->end (add+1)cp
// get(3)->goTo(3)->get(3+2)->get(5)->2
// 5->end (add+1)
// get(1)->goTo(1)->get(1+1)->get(2)->6
// 2->end (add+1)
// get(3)-> goTo(3) -> get(3+3)->get(6) : does not exist
//solution fails
//will think more about this problem tonight

//to do later : https://cses.fi/problemset/task/1749
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}

int main(){
  ios_base::sync_with_stdio(false);

  cout<<"heyy"<<endl;

}