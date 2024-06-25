#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    int m, n;
    cin >> m >> n;
    map<string, int> mp;
    while(m--){
        string s; cin >> s;
        int x; cin >> x;
        mp[s] = x;
    }
    cin.ignore();
    while(n--){
        int ans = 0;
        int  aa = 0;
        while(1){
            string v;
            getline(cin, v);
            if(v.find(".") != -1) break;
            stringstream strm(v);
            string ckr;
            while(strm >> ckr){
                ans+=mp[ckr];
            }
        }
        cout << ans << '\n';
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
