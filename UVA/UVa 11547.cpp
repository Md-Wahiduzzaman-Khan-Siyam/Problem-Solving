#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
	while(t--){
		long long int n; cin >> n;
		n = (((((n*567)/9)+7492)*235)/47)-498;
		n/=10;
		cout << abs(n % 10) << endl;
	}
}
