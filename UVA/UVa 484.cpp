#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int x;
    vector<int> v;
    map<int, int> mn;
    while(cin >> x){
    	if(mn[x] == 0) v.pb(x);
        mn[x]++;
    }
    for(int i = 0; i < v.size(); i++){
    	cout << v[i] << " " << mn[v[i]] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}
