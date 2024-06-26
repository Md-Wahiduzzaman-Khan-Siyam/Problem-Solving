#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

map<string, string> tlr;

void solve(){
    string a;
    while(getline(cin, a)){
        if(a.empty()) break;
        stringstream s(a);
        string x, y;
        s >> x >> y;
        tlr[y] = x;
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
    string ck;
    while(cin >> ck){
        if(tlr[ck] == "") cout << "eh\n";
        else cout << tlr[ck] << '\n';
    }
}
