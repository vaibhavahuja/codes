#include <bits/stdc++.h>
using namespace std;
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
#define pii pair<int, int>

void show(auto a){
  int i = 0;
  while(i < a.size()){
    cout<<a[i].first<<" "<<a[i].second<<endl;
    i++;
  }
  cout<<endl;
}

pii rotateCounter(pii mole, pii head){
	int x = mole.first-head.first;
	int y = mole.second - head.second;
	pii temp;
	temp.first = y*(-1)+head.first;
	temp.second = x+head.second;
	return temp;
}

long long distSq(int x1, int y1, int x2, int y2){
	return pow(x2-x1,2)+pow(y2-y1,2);
}
 
bool isSquare(pii A, pii B, pii C, pii D) 
{ 
	int x1 = A.first;
	int y1 = A.second;
	int x2 = B.first;
	int y2 = B.second;
	int x3 = C.first;
	int y3 = C.second;
	int x4 = D.first;
	int y4 = D.second;
	




    int d2 = distSq(x1,y1,x2,y2);
    if(d2==0)
    return false;
    int d3 = distSq(x1,y1,x3,y3); 
    int d4 = distSq(x1,y1,x4,y4);  
  
  
    if (d2 == d3 && 2 * d2 == d4 && 2 * distSq(x2,y2,x4,y4) == distSq(x2,y2, x3,y3)) { 
        return true; 
    } 
  
	if (d3 == d4 && 2 * d3 == d2 && 2 * distSq(x3,y3, x2,y2) == distSq(x3,y3, x4,y4)) { 
        return true; 
    } 
    if (d2 == d4 && 2 * d2 == d3 && 2 * distSq(x2,y2, x3,y3) == distSq(x2,y2, x4,y4)) { 
        return true; 
    } 
  
    return false; 
}


int main(){
  ios_base::sync_with_stdio(false);



  int t;
  cin>>t;
  while(t--){
  	  int n = 4;
	  vp first, second, third, fourth;
	  for(int i=0;i<4;i++){
	  	int x, y, a, b;
	  	cin>>x>>y>>a>>b;
	  	if(i == 0){
	  		pii head = make_pair(a, b);
		  	first.push_back(make_pair(x, y));
		  	first.push_back(rotateCounter(first[0], head));
		  	first.push_back(rotateCounter(first[1], head));
		  	first.push_back(rotateCounter(first[2], head));
	  	}else if(i == 1){
	  		pii head = make_pair(a, b);
		  	second.push_back(make_pair(x, y));
		  	second.push_back(rotateCounter(second[0], head));
		  	second.push_back(rotateCounter(second[1], head));
		  	second.push_back(rotateCounter(second[2], head));
	  	}else if(i == 2){
	  		pii head = make_pair(a, b);
		  	third.push_back(make_pair(x, y));
		  	third.push_back(rotateCounter(third[0], head));
		  	third.push_back(rotateCounter(third[1], head));
		  	third.push_back(rotateCounter(third[2], head));
	  	}else if(i == 3){
	  		pii head = make_pair(a, b);
		  	fourth.push_back(make_pair(x, y));
		  	fourth.push_back(rotateCounter(fourth[0], head));
		  	fourth.push_back(rotateCounter(fourth[1], head));
		  	fourth.push_back(rotateCounter(fourth[2], head));
	  	}
	  	
	  }

	  int ans = 1e6;
	  	
	  for(int i = 0; i < 4; i++){
	  	for(int j = 0; j < 4; j++){
	  		for(int k = 0; k < 4; k++){
	  			for(int l = 0; l < 4; l++){
	  				if(isSquare(first[i], second[j], third[k], fourth[l])) ans = min(i+j+k+l, ans);
	  			}
	  		}
	  	}
	  }
	  if(ans==1e6) cout<<-1<<endl;
	  else cout<<ans<<endl;
	
  }
  
}