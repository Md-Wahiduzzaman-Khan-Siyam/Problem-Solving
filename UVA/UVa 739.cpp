#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s;
    cout << "         NAME                     SOUNDEX CODE" << endl;
    while(cin >> s)
    {
        int ck1, ck2, ck3, ck4, ck5, ck6;
        ck1 = ck2 = ck3 = ck4 = ck5 = ck6 = 0;
        string n;
        for(int i = 0; i < s.size(); i++){
            if(i == 0){
                n.push_back(s[i]);
            }
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'W' || s[i] == 'H'){
                ck1 = ck2 = ck3 = ck4 = ck5 = ck6 = 0;
            }
            if((s[i] == 'B' || s[i] == 'P' || s[i] == 'F' || s[i] == 'V') && ck1 == 0){
                if(i != 0){
                    char q = '1';
                    n.push_back(q);
                }
                ck1 = 1;
                ck2 = ck3 = ck4 = ck5 = ck6 = 0;
            }
            if((s[i] == 'C' || s[i] == 'S' || s[i] == 'K' || s[i] == 'G' || s[i] == 'J' || s[i] == 'Q' || s[i] == 'X' || s[i] == 'Z') && ck2 == 0){
                if(i != 0){
                    char q = '2';
                    n.push_back(q);
                }
                ck2 = 1;
                ck1 = ck3 = ck4 = ck5 = ck6 = 0;
            }
            if((s[i] == 'D' || s[i] == 'T') && ck3 == 0){
                if(i != 0){
                    char q = '3';
                    n.push_back(q);
                }
                ck3 = 1;
                ck1 = ck2 = ck4 = ck5 = ck6 = 0;
            }
            if((s[i] == 'L') && ck4 == 0){
                if(i != 0){
                    char q = '4';
                    n.push_back(q);
                }
                ck4 = 1;
                ck1 = ck2 = ck3 = ck5 = ck6 = 0;
            }
            if((s[i] == 'M' || s[i] == 'N') && ck5 == 0){
                if(i != 0){
                    char q = '5';
                    n.push_back(q);
                }
                ck5 = 1;
                ck1 = ck2 = ck3 = ck4 = ck6 = 0;
            }
            if((s[i] == 'R') && ck6 == 0){
                if(i != 0){
                    char q = '6';
                    n.push_back(q);
                }
                ck6 = 1;
                ck1 = ck2 = ck3 = ck4 = ck5 = 0;
            }
            if(n.size() == 4) break;
        }
        char q = '0';
        if(n.size() == 1){
            n.push_back(q); n.push_back(q); n.push_back(q);
        }
        else if(n.size() == 2){
            n.push_back(q); n.push_back(q);
        }
        else if(n.size() == 3){
            n.push_back(q);
        }
        for(int i = 1; i <= 35; i++){
            if(i == 10){
                cout << s; i+=(s.size()-1);
            }
            else if(i == 35){
                cout << n << endl;
            }
            else{
                cout << " ";
            }
        }
    }
    for(int i = 1; i < 20; i++)
        cout << " ";
    cout << "END OF OUTPUT" << endl;
}

