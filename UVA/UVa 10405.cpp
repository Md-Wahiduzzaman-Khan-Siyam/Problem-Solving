#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);
        int arr[a.size()+10][b.size()+10];

        for(int i = 0; i <= a.size(); i++){
            for(int j = 0; j <= b.size(); j++){
                if(i == 0 || j == 0) arr[i][j] = 0;
                else if(a[i-1] == b[j-1]){
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else{
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }
        cout << arr[a.size()][b.size()] << endl;
    }
}

