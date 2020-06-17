#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pii pair<int, int>
#define vp vector<pii>
#define vs vector<string>
#define mii map<int, int>
void show(auto a){for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}cout<<endl;}


char a[100][100];
bool visited[100][100];


bool canGo(int n, int m, int i, int j){
	return (i >= 0 && i < n && j >= 0 && j < m && (a[i][j] == '.' || a[i][j] == 'G'));
}


vi dirX = {0, 1, 0, -1};
vi dirY = {1, 0, -1, 0};

bool dfs(int n, int m, int i, int j){
	visited[i][j] = true;
	for(int c = 0; c < 4; c++){
		if(canGo(n, m, i+dirX[c], j + dirY[c]) && !visited[i+dirX[c]][j+dirY[c]]){
			dfs(n, m, i+dirX[c], j + dirY[c]);
		}
	}
}



int main(){
  ios_base::sync_with_stdio(false);
  int t;
  cin>>t;
  while(t--){
	  int n, m;
	  cin>>n>>m;

	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		cin>>a[i][j];
	  		visited[i][j] = false;
	  	}
	  }


	  //check if NO G
	  int p = 0;
	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		if(a[i][j] == 'G') p++;
	  	}
	  }
	  if(p == 0){
	  	cout<<"Yes"<<endl;
	  	continue;
	  }

	  int foundBG = 0;
	  //cover all B's
	  for(int i = 0; i < n; i++){
	  	for(int j = 0; j < m; j++){
	  		if(a[i][j] == 'B'){
	  			if(i > 0){
	  				if(a[i-1][j] == 'G'){ foundBG = 1; break;}

	  				if(a[i-1][j] == '.') a[i-1][j] = '#';
	  			}

	  			if(j > 0){
	  				if(a[i][j-1] == 'G'){ foundBG = 1; break;}
	  				if(a[i][j-1] == '.') a[i][j-1] = '#';	
	  			}

	  			if(i < n-1){
	  				if(a[i+1][j] == 'G'){ foundBG = 1; break;}
	  				if(a[i+1][j] == '.') a[i+1][j] = '#';	
	  			}

	  			if(j < m-1){
	  				if(a[i][j+1] == 'G'){ foundBG = 1; break;}
	  				if(a[i][j+1] == '.') a[i][j+1] = '#';	
	  			}
	  		}
	  	}
	  	if(foundBG == 1) break;
	  }
	  if(foundBG == 1 || a[n-1][m-1] == '#'){
	  	cout<<"No"<<endl;
	  	continue;
	  } 


	  int cntGoods = 0, cntVisitedGoods = 0;
 	  dfs(n, m, n-1, m-1);


 	  // for(int i = 0; i < n; i++){
 	  // 	for(int j = 0; j < m; j++){
 	  // 		cout<<a[i][j]<<" ";
 	  // 	}
 	  // 	cout<<endl;
 	  // }

 	  for(int i = 0; i < n; i++){
 	  	for(int j = 0; j < m; j++){
 	  		if(a[i][j] == 'G') cntGoods++;
 	  		if(a[i][j] == 'G' && visited[i][j]) cntVisitedGoods++;
 	  	}
 	  }

	  if(cntGoods == cntVisitedGoods){
	  	cout<<"Yes"<<endl;
	  }else cout<<"No"<<endl;

  }

}