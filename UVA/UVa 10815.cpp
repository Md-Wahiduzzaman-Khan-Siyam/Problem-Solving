#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve(){
    string s;
    set<string> st;
    while(getline(cin, s)){
    	stringstream cn(s);
    	string nw;
    	while(cn >> nw){
    		string fn;
    		for(int i = 0; i < nw.size(); i++){
    			if(nw[i] >= 65 && nw[i] <= 90){
    				fn.pb((char)(nw[i] + 32));
    			}
    			else if(nw[i] >= 97 && nw[i] <= 122){
    				fn.pb(nw[i]);
    			}
    			else{
    				if(!fn.empty()){
    					st.insert(fn);
    					fn.clear();
    				}
    			}
    		}
    		if(!fn.empty())st.insert(fn);
    	}
    }
    for(auto i : st){
    	cout << i << '\n';
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
