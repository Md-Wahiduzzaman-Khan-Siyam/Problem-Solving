#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int arr[n+10];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int b, ck = 0, x, ff, ll, d = 10000000;
        cin >> x;
        sort(arr, arr + n);
        for(int i = 0; i < n; i++){
            int a = x - arr[i];
            if(arr[i] == x) b = x;

            int l = 0, h = n-1;
            while(l <= h){
                int mid = (l+h)/2;

                if(arr[mid] == a){
                    ck = 1;
                    int dd = abs(arr[i]-arr[mid]);

                    if(dd < d){
                        d = dd;
                        ff = arr[i];
                        ll = arr[mid];
                    }
                    break;
                }
                else if(arr[mid] < a){
                    l = mid + 1;
                }
                else{
                    h = mid - 1;
                }
            }
        }
        if(!ck){
            ff = 0, ll = x;
        }
        if(ff > ll) swap(ff, ll);
        cout << "Peter should buy books whose prices are ";
        cout << ff << " and " << ll << "." << endl ;
        cout << endl;
    }
}

