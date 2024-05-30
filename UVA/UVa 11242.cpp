#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

void solve()
{
    int f, r;
    while(cin >> f, f != 0){
        cin >> r;
        int ft[f], rt[r];
        vector <double> drv;

        for(int i = 0; i < f; i++)
            cin >> ft[i];
        for(int i = 0; i < r; i++)
            cin >> rt[i];

        for(int i = 0; i < f; i++){
            for(int j = 0; j < r; j++){
                drv.push_back((double)rt[j]/(double)ft[i]);
            }
        }
        sort(drv.begin(), drv.end());
        double x = 0;
        for(int i = 1; i < drv.size(); i++){
            if((drv[i]/drv[i-1]) > x) x = drv[i]/drv[i-1];
        }
        printf("%.2lf\n", x);
    }
}

int main()
{
    int t;
    t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}

