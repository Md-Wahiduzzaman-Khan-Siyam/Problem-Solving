#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <string> lst(10);
int ind = -1;
void solve()
{
    ind++;
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            lst[ind].push_back(s[i]);
        } else break;
    }
}

void Print()
{
    sort(lst.begin(), lst.end());
    int i, c = 1;
    for(i = 0; i < lst.size() - 1; i++){
        if(lst[i] == lst[i+1]){
            c++;
        }
        else{
            cout << lst[i] << " " << c << endl;
            c = 1;
        }
    } cout << lst[i] << " " << c << endl;
}

int main()
{
    int t;
    cin >> t;
    lst.resize(t);
    cin.ignore();
    while(t--){
        solve();
    } Print();
}

