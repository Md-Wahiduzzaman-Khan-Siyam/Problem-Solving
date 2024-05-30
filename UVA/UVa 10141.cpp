#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int w = 0;
void solve(int r, int p)
{
    w++;
    string s;
    cin.ignore();
    while(r--){
        getline(cin, s);
    }
    int a = -1;
    double x = 1e18;
    string com;
    while(p--){
        string ss;
        getline(cin, ss);
        double d;
        int n;
        cin >> d >> n;
        if(n > a){
            a = n;
            x = d;
            com = ss;
        }
        else if(n == a && d < x){
            x = d;
            com = ss;
        }
        for(int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, s);
        }
    }
    if(w > 1) cout << endl;
    cout << "RFP #" << w << endl;
    cout << com << endl;
}

int main()
{
    int r, p;
    while(cin >> r >> p){
        if(r == 0 && p == 0) break;
        solve(r, p);
    }
}
