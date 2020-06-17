#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"2\n";
    for(int i=2;i<=n;i++){
        cout<<1LL * i * (i + 1) * (i + 1) - (i - 1)<<'\n';
    }
}
