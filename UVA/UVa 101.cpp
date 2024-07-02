#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<int> trvl;

bool ck(int a, int b, int n, vector<vector<int>> &v){
    int x = -1, y = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(v[i][j] == a){
                x = i;
            }
            if(v[i][j] == b){
                y = i;
            }
        }
    }
    if(x == y) return true;
    else return false;
}

void move(int a, int n, vector<vector<int>> &v){
    int r = -1, c = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(a == v[i][j]){
                r = i; c = j;
                break;
            }
        } if(r != -1 && c != -1) break;
    }
    for(int j = v[r].size()-1; j >= 0; j--){
        if(v[r][j] == a){
            v[r].pop_back();
            trvl.pb(a); break;
        }
        else{
            int x = v[r][j];
            v[x].clear();
            v[x].pb(x);
            v[r].pop_back();
        }
    }
}

void pile(int a, int n, vector<vector<int>> &v){
    int r = -1, c = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(a == v[i][j]){
                r = i; c = j;
                break;
            }
        } if(r != -1 && c != -1) break;
    }
    for(int j = c; j < v[r].size(); j++){
        trvl.pb(v[r][j]);
    }
    for(int j = v[r].size()-1; j >= c; j--){
        v[r].pop_back();
    }
}

void onto(int b, int n, vector<vector<int>> &v){
    int r = -1, c = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(b == v[i][j]){
                r = i; c = j;
                break;
            }
        } if(r != -1 && c != -1) break;
    }
    for(int j = v[r].size()-1; j >= 0; j--){
        if(v[r][j] == b){
            for(auto x : trvl){
                v[r].pb(x);
            }
            trvl.clear(); break;
        }
        else{
            int x = v[r][j];
            v[x].clear();
            v[x].pb(x);
            v[r].pop_back();
        }
    }
}
void over(int b, int n, vector<vector<int>> &v){
    bool f = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(b == v[i][j]){
                for(auto x : trvl){
                    v[i].pb(x);
                }
                trvl.clear();
                f = 1; break;
            }
        }
        if(f) break;
    }
}

void solve(){
    int n; cin >> n;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        v[i].pb(i);
    }
    while(1){
        string c; cin >> c;
        if(c == "quit") break;
        if(c == "move"){
            int a, b;
            string t;
            cin >> a >> t >> b;
            if(ck(a, b, n, v)) continue;
            move(a, n, v);
            if(t == "onto"){
                onto(b, n, v);
            }
            else if(t == "over"){
                over(b, n, v);
            }
        }
        else if(c == "pile"){
            int a, b;
            string t;
            cin >> a >> t >> b;
            if(ck(a, b, n, v)) continue;
            pile(a, n, v);
            if(t == "onto"){
                onto(b, n, v);
            }
            else if(t == "over"){
                over(b, n, v);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << i << ":";
        for(int j = 0; j < v[i].size(); j++){
            cout << " " << v[i][j];
        }
        cout << '\n';
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt = 1;
    //cin >> tt;
    while(tt--){
        solve();
    }
}
