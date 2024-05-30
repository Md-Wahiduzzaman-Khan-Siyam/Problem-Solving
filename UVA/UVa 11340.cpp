#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--){
        double v[200];
        for(int i = 0; i < 200; i++)
            v[i] = 0;

        int n; cin >> n;
        while(n--){
            double x; char c;
            cin >> c >> x;
            v[c] = x;
        }
        int l; cin >> l;
        double sum = 0;
        cin.ignore();
        string s;
        while(l--){
            getline(cin, s);
            for(int i = 0; i < s.size(); i++){
                sum += v[s[i]];
            }
        }
        double dd = sum/100.0;
        printf("%.2lf$\n", dd);
	}
}

