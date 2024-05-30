#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve()
{
	long long int s, d;
	cin >> s >> d;
	if(s >= d){
		double x = (s+d)/2.0;
		double y = s - x;
		long long int a = x, b = y;
		if(x == a && y == b)
            cout << max(a, b) << " " << min(a, b) << endl;
        else cout << "impossible" << endl;
	}
	else cout << "impossible" << endl;
}

int main()
{
	int t; cin >> t;
	while(t--){
		solve();
	}
}
