#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int c;
bool dgt(int x, int y)
{
    bool ar[10], ck = 1;
    for(int i = 0; i < 10; i++) ar[i] = 0;
    while(x){
        ar[x%10] = 1;
        x/=10;
        c++;
    } if(c == 4) ar[0] = 1;

    while(y){
        ar[y%10] = 1;
        y/=10;
    }
    for(int i = 0; i < 10; i++){
        if(ar[i] != 1) ck = 0;
    }
    return ck;
}

int main()
{
    int z = 0, n;
    while(cin >> n, n != 0){
        z++;
        if(z > 1) cout << '\n';
        int v = 1;
        bool ase = 0;
        for(int i = 1234; i <= 98765 && v < 98765; i++){
            v = i*n;
            c = 0;
            bool ck = dgt(i, v);
            if(ck){
                cout << v << " / ";
                if(c == 4) cout << "0";
                cout << i << " = " << n << '\n';
                ase = 1;
            }
        }
        if(!ase) cout << "There are no solutions for " << n << "." << '\n';
    }
}


