#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin >> n, n != 0){
        string m[n];
        for(int i = 0; i < n; i++)
            cin >> m[i];
        int s = 0;
        bool r[4], c[4];
        r[0] = r[1] = r[2] = r[3] = 0;
        c[0] = c[1] = c[2] = c[3] = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(m[i][j] == '.' && r[i] == 0 && c[j] == 0){
                    s++;
                    if(j+1 < n && r[i] == 0 && m[i][j+1] == 'X'){
                        r[i] = 1; c[j] = 1; continue;
                    }
                    r[i] = 1;
                    int v;
                    if(c[j] == 0 && (i == 0 || i == 1 || i == 2)){
                        v = j;
                        while(j < n){
                            if(i+1 < n && m[i+1][j] == 'X' && m[i][j] == '.' && c[j] == 0){
                                c[j] = 1;
                                break;
                            } j++;
                        }
                        if(j == n) j--;
                        if(c[j] == 0) j = v;
                    }
                    if(c[j] == 0 && ((i == 0 || i == 1))){
                        v = j;
                        while(j < n){
                            if(i+2 < n && m[i+2][j] == 'X' && m[i][j] == '.' && c[j] == 0){
                                c[j] = 1;
                                break;
                            } j++;
                        }
                        if(j == n) j--;
                        if(c[j] == 0) j = v;
                    }
                    if(c[j] == 0 && i == 0){
                        v = j;
                        while(j < n){
                            if(i+3 < n && m[i+3][j] == 'X' && m[i][j] == '.' && c[j] == 0){
                                c[j] = 1;
                                break;
                            } j++;
                        }
                        if(j == n) j--;
                        if(c[j] == 0) j = v;
                    }
                    if(c[j] == 0) c[j] = 1;
                }
                if(m[i][j] == 'X'){
                    r[i] = 0; c[j] = 0;
                }
            }
        }
        cout << s << endl;
    }
}

