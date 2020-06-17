#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void foo(auto& S, auto& s, auto& dist)
{
    ll nxt = *S.upper_bound(dist);
    ll prv = *(--S.upper_bound(dist));
    S.insert(dist);
 
    auto e = s.lower_bound(nxt - prv);
    s.erase(e);
    s.insert(nxt - dist);
    s.insert(dist - prv);
}
 
int main()
{
    ll w, h, n; cin >> w >> h >> n;
    multiset<ll> H{0, h}, V{0, w}, hdist{h}, vdist{w};
    while(n--)
    {
        char type; ll dist;
        cin >> type >> dist;
        if(type == 'H')
        {
            foo(H, hdist, dist);
        }
        else
        {
            foo(V, vdist, dist);
        }
 
        cout << (*hdist.rbegin()) * (*vdist.rbegin()) << "\n";
    }
}