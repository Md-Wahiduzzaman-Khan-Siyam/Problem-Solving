#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int p[n+1], w[n+1], s = 0;
        for(int i = 1; i <= n; i++){
            cin >> w[i];
            p[i] = w[i];
            s+=w[i];
        }
        int x = s/2;
        int dp[n+1][x+1];

        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= x; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(w[i] > j){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+p[i]);
                    //as w[i] & p[i] are the same here, can be used just one
                }
            }
        }
        int d = s - dp[n][x];
        cout << abs(dp[n][x]-d) << endl;
    }
}

