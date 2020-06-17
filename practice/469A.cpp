#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
#define gg {puts("-1");return 0;}
int n,m;
char s[maxn];
vector<int>vec[maxn];

int main()
{
    scanf("%s",s+1);
    int len=strlen(s+1);
    int mx=0,zero=0;
    for(int i=1;i<=len;i++)
    {
        if(s[i]=='0')
            vec[++zero].push_back(i);
        else
        {
            if(zero==0)
                gg;
            vec[zero--].push_back(i);
        }
        mx=max(mx,zero);
    }
    if(mx!=zero)
        gg;
    printf("%d\n",mx);
    for(int i=1;i<=mx;i++)
    {
        printf("%d",vec[i].size());
        for(int j=0;j<vec[i].size();j++)
            printf(" %d",vec[i][j]);
        printf("\n");
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// #define vi vector<int>
// #define pii pair<int, int>
// #define vp vector<pii>
// #define vs vector<string>
// #define mii map<int, int>

// void show(auto a){
//   int i = 0;
//   cout<<a.size()<<" ";
//   while(i < a.size()){
//     cout<<a[i]<<" ";
//     i++;
//   }
//   cout<<endl;
// }

// void showStack(stack<vi> a){
// 	stack<vi> p = a;
// 	while(!p.empty()){
// 		vi e = p.top();
// 		show(e);
// 		p.pop();
// 	}
// }


// int main(){
//   ios_base::sync_with_stdio(false);

//   stack<vi> zeros, ones;
//   //will contain vectors with last elem as 0 or 1.
//   string s;
//   cin>>s;
//   int flag = 0;
//   for(int i = 0; i < s.length(); i++){
//   	if(s[i] == '0'){
//   		if(!ones.empty()){
//   			vi p = ones.top();
//   			ones.pop();
//   			p.push_back(i+1);
//   			zeros.push(p);
//   		}else{
//   			vi p = {i+1};
//   			zeros.push(p);
//   		}
//   	}else{
//   		if(!zeros.empty()){
//   			vi p = zeros.top();
//   			zeros.pop();
//   			p.push_back(i+1);
//   			ones.push(p);
//   		}else{
//   			flag = 1;
//   			break;
//   		}
//   	}
//   }
//   if(flag == 1 || (!ones.empty())){
//   	cout<<-1<<endl;
//   }else{
//   	cout<<zeros.size()<<endl;
//   	showStack(zeros);
  	
//   }

// }