#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve(int sz)
{
    int n; cin >> n;
    int arr[n+1];
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    int dp[n+1][sz+1];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= sz; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if(arr[i] <= j){
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i]]+arr[i]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    int i = n+1, j = sz;
    int rem = dp[n][sz];
    vector <int> v;
    while(i > 0 && rem > 0){
        i--;
        if(dp[i-1][j] == rem)
            continue;
        else{
            v.push_back(arr[i]);
            rem -= arr[i];
            j-=arr[i];
        }
    }
    for(int i = v.size()-1; i >= 0; i--)
        cout << v[i] << " ";
    cout << "sum:" << dp[n][sz] << endl;

}

int main()
{
    int sz;
    while(cin >> sz){
        solve(sz);
    }
}


