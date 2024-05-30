#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(int w, int h, int n)
{
	bool ck[w+1][h+1];
	for(int i = 1; i <= w; i++)
		for(int j = 1; j <= h; j++)
			ck[i][j] = 1;

	while(n--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		if(x1 > x2) swap(x1, x2);
		if(y1 > y2) swap(y1, y2);

		for(int i = x1; i <= x2; i++)
			for(int j = y1; j <= y2; j++)
				ck[i][j] = 0;
	}
	int x = 0;
	for(int i = 1; i <= w; i++){
		for(int j = 1; j <= h; j++){
			if(ck[i][j] == 1) x++;
		}
	}
	if(x == 0) cout << "There is no empty spots.";
	else if(x == 1) cout << "There is one empty spot.";
	else cout << "There are " << x << " empty spots.";
	cout << '\n';
}

int main()
{
	int w, h, n;
	while(cin >> w >> h >> n){
		if(w == 0 && h == 0 && n == 0) break;
		solve(w, h, n);
	}
}

